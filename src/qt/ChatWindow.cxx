#include "ChatWindow.h"
#include <QCheckBox>
#include <QRegExp>
#include <QSettings>
#include <QTime>
#include <QTextBrowser>
#include <QDesktopServices>
#include <QUrl>

ChatWindow::ChatWindow(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);

    stackedWidget->setCurrentWidget(loginPage);

    QSettings settings("navajocoin","wallet");

    //qDebug() << settings.value("username").toString();

    //qDebug() << "TEST";

    QString username = settings.value("username").toString();

    if(username != ""){
        userLineEdit->setText(username);
        rememberCheckBox->setChecked(true);
    }else{
        userLineEdit->setFocus();
    }

    socket = new QTcpSocket(this);

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
    connect(socket, SIGNAL(connected()), this, SLOT(connected()));

}

void ChatWindow::on_loginButton_clicked()
{

    QString username = userLineEdit->text().trimmed();

    if(!username.isEmpty())
    {

        isChecked = rememberCheckBox->checkState();

        QSettings settings("navajocoin","wallet");

        if(isChecked)
        {
            settings.setValue("username",username);
        }else{
            settings.setValue("username","");
        }

        socket->connectToHost(serverLineEdit->text(), 4200);



    }
}

void ChatWindow::on_sayButton_clicked()
{
    this->postMessage();
}

void ChatWindow::readyRead()
{

    QRegExp regExp("((([A-Za-z]{3,9}:(?:\\/\\/)?)(?:[\\-;:&=\\+\\$,\\w]+@)?[A-Za-z0-9\\.\\-]+|(?:www\\.|[\\-;:&=\\+\\$,\\w]+@)[A-Za-z0-9\\.\\-]+)((?:\\/[\\+~%\\/\\.\\w\\-]*)?\\??(?:[\\-\\+=&;%@\\.\\w]*)#?(?:[\\.\\!\\/\\\\\\w]*))?)");

    while(socket->canReadLine())
    {
        QString line = QString::fromUtf8(socket->readLine()).trimmed();

        QRegExp messageRegex("^([^:]+):(.*)$");

        QRegExp usersRegex("^/users:(.*)$");

        if(usersRegex.indexIn(line) != -1)
        {
            QStringList users = usersRegex.cap(1).split(",");
            userListWidget->clear();
            foreach(QString user, users)
                new QListWidgetItem(QPixmap(":/res/icons/user.png"), user, userListWidget);
        }
        else if(messageRegex.indexIn(line) != -1)
        {
            QString user = messageRegex.cap(1);
            QString message = messageRegex.cap(2);

            QString anchorMessage = message.replace(regExp, "<a href='\\1'>\\1</a>" );

            QTime time;
            QTime currentTime = time.currentTime();

            QString newText = "("+currentTime.toString()+") <b>" + user + "</b>: " + anchorMessage;

            roomTextBrowser->append(newText);

        }
    }
}

void ChatWindow::connected()
{
    stackedWidget->setCurrentWidget(chatPage);

    socket->write(QString("/me:" + userLineEdit->text() + "\n").toUtf8());

    sayLineEdit->setFocus();

    roomTextBrowser->setOpenExternalLinks(false);
    roomTextBrowser->setOpenLinks(false);

}

void ChatWindow::on_logoutButton_clicked()
{
    socket->disconnectFromHost();
    stackedWidget->setCurrentWidget(loginPage);
    if(!isChecked){
        userLineEdit->clear();
        userLineEdit->setFocus();
    }
}

void ChatWindow::on_sayLineEdit_returnPressed()
{
    this->postMessage();
}

void ChatWindow::postMessage()
{

    if(messageAllowed)
    {

        //start the timer and disable the button style
        timer.start(messageTimeout, this);
        messageAllowed = false;
        sayButton->setStyleSheet("background: none;\nbackground-color: rgb(255,255,255);\nborder-radius:3px;\nborder: 1px solid #C4C1BD;\ncolor: #AAAAAA;\npadding: 4px 12px;");

        QString message = sayLineEdit->text().trimmed();

        if(!message.isEmpty())
        {
            socket->write(QString(message + "\n").toUtf8());
        }

        sayLineEdit->clear();

        sayLineEdit->setFocus();

    }//message allowed

}

void ChatWindow::timerEvent(QTimerEvent *event)
{

    //stop the timer and reset the button style
    sayButton->setStyleSheet("background: none;\nbackground-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\nborder-radius:3px;\nborder: 1px solid #C4C1BD;\ncolor: #4C4C4C;\npadding: 4px 12px;");
    timer.stop();
    messageAllowed = true;

}

void ChatWindow::on_roomTextBrowser_anchorClicked(QUrl url)
{
    QString urlString = url.toString();

    if(!urlString.startsWith("http") && urlString.indexOf("://") == -1){
        urlString = "http://"+urlString;
    }

    QDesktopServices::openUrl(QUrl(urlString, QUrl::TolerantMode));

}
