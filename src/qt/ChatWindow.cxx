#include "ChatWindow.h"
#include <QCheckBox>
#include <QRegExp>
#include <QSettings>
#include <QTime>
#include <QTextBrowser>
#include <QDesktopServices>
#include <QUrl>
#include <bitcoingui.h>
#include <QTabWidget>
#include <QJsonObject>
#include <QJsonDocument>

ChatWindow::ChatWindow(QWidget *parent) : QMainWindow(parent)
{

    setupUi(this);

    stackedWidget->setCurrentWidget(loginPage);

    QSettings settings("navajocoin","wallet");

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

    username = userLineEdit->text().trimmed();

    if(!username.isEmpty())
    {
        QRegExp invalidChars("[&\"\'*]");

        if(username.toLower() == "chat" || username.toLower() == "server"){
            errorMessageLabel->setText("Invalid Username");
            errorMessageLabel->setMaximumHeight(17);

        }else if(invalidChars.indexIn(username) != -1){
            errorMessageLabel->setText("Invalid Characters");
            errorMessageLabel->setMaximumHeight(17);

        }else{
            errorMessageLabel->setText("");
            errorMessageLabel->setMaximumHeight(0);
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

            int numMatches = 0;

            foreach(QString user, users){

                if(user == username){
                    numMatches++;
                }

                new QListWidgetItem(QPixmap(":/res/icons/user.png"), user, userListWidget);
            }

            //if first user list received, check for multiple users
            if(!userChecked){

                if(numMatches > 1){
                    on_logoutButton_clicked();
                    errorMessageLabel->setText("Username already in use");
                    errorMessageLabel->setMaximumHeight(17);
                }else{
                    stackedWidget->setCurrentWidget(chatPage);
                    userChecked = true;
                    errorMessageLabel->setText("");
                    errorMessageLabel->setMaximumHeight(0);
                }

            }//if userChecked

        }
        else if(messageRegex.indexIn(line) != -1)
        {

            QString user = messageRegex.cap(1);
            QString rawMessage = messageRegex.cap(2);

            QJsonDocument jsonDoc =  QJsonDocument::fromJson(rawMessage.toUtf8());

            QJsonObject jsonObject = jsonDoc.object();

            QTime time;
            QTime currentTime = time.currentTime();

            if(jsonObject.count() == 0){

                roomTextBrowser->append("("+currentTime.toString()+") <b>Server</b>: " +rawMessage);

            }else{

                QString message = jsonObject["message"].toString();
                QString to = jsonObject["to"].toString();
                QString from = jsonObject["from"].toString();
                QString isServer = jsonObject["is_server"].toString();

                QString anchorMessage = message.replace(regExp, "<a href='\\1'>\\1</a>" );

                QTime time;
                QTime currentTime = time.currentTime();

                QString newText;

                if(isServer == "TRUE"){
                    newText = "("+currentTime.toString()+") <b>Server</b>: " + from + " " + anchorMessage;
                }else{
                    newText = "("+currentTime.toString()+") <b>" + from + "</b>: " + anchorMessage;
                }

                if(to == "Chat"){
                    roomTextBrowser->append(newText);
                }else{

                    if(from == username){

                        int tabIndex = -1;
                        int numTabs = tabWidget->count();

                        for(int i = 0; i < numTabs; i++){

                            if(tabWidget->tabText(i) == to){
                                tabIndex = i;
                            }

                        }

                        if(tabIndex != -1){
                            QTextBrowser *tab = tabWidget->widget(tabIndex);
                            tab->append(newText);
                        }

                    }//from me

                    if(to == username){

                        int tabIndex = -1;
                        int numTabs = tabWidget->count();

                        for(int i = 0; i < numTabs; i++){

                            if(tabWidget->tabText(i) == from){
                                tabIndex = i;
                            }

                        }

                        if(tabIndex != -1){
                            QTextBrowser *tab = tabWidget->widget(tabIndex);
                            tab->append(newText);
                        }else{
                            QString initText = "("+currentTime.toString()+") <b>" + from + "</b>: " + anchorMessage;
                            addTab(initText, from);
                        }

                        if(tabIndex != tabWidget->currentIndex()){
                            tabWidget->tabBar()->setTabTextColor(tabIndex, QColor(191,58,43,255));
                        }

                    }//to me

                }//is json object

            }

            bitcoinGUI->chatUpdated();


        }
    }
}


void ChatWindow::setGUI(BitcoinGUI* gui){
    bitcoinGUI = gui;
}


void ChatWindow::connected()
{
    //stackedWidget->setCurrentWidget(chatPage);

    //configure chat tab

    int numTabs = tabWidget->count();

    int tabIndex = -1;

    for(int i = 0; i < numTabs; i++){

        if(tabWidget->tabText(i) == "Chat"){
            tabIndex = i;
        }

    }

    if(tabIndex == -1){

        roomTextBrowser = new QTextBrowser(tabWidget);
        tabWidget->addTab(roomTextBrowser, "Chat");
        roomTextBrowser->setGeometry(-10,-5,542,481);
        roomTextBrowser->setStyleSheet("background: none; background-color: #FFF; border-radius:3px; border: 1px solid #C4C1BD; color: #4C4C4C; padding: 4px;");
        roomTextBrowser->setOpenExternalLinks(false);
        roomTextBrowser->setOpenLinks(false);
        connect(roomTextBrowser, SIGNAL(anchorClicked(QUrl)), this, SLOT(on_roomTextBrowser_anchorClicked(QUrl)));
        tabWidget->setTabsClosable(true);
        tabWidget->tabBar()->tabButton(0, QTabBar::RightSide)->resize(0,0);

    }

    sayLineEdit->setFocus();

    socket->write(QString("/me:" + userLineEdit->text() + "\n").toUtf8());


}

void ChatWindow::on_logoutButton_clicked()
{
    socket->disconnectFromHost();

    int numTabs = tabWidget->count();

    for(int i = 1; i < numTabs; i++){
        tabWidget->removeTab(i);
    }

    QTextBrowser *chatTab = tabWidget->widget(0);
    chatTab->clear();

    stackedWidget->setCurrentWidget(loginPage);
    if(!isChecked){
        userLineEdit->clear();
        userLineEdit->setFocus();
    }

    userChecked = false;
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

        //find active tab

        int currentTab = tabWidget->currentIndex();

        QString message = sayLineEdit->text().trimmed();

        QJsonObject jsonMessage;

        jsonMessage["to"] = tabWidget->tabText(currentTab);
        jsonMessage["from"] = username;
        jsonMessage["is_server"] = QString("FALSE");
        jsonMessage["message"] = message + "\n";

        QJsonDocument *jsonDocument = new QJsonDocument(jsonMessage);

        if(!message.isEmpty())
        {
            QString stripped = jsonDocument->toJson();
            stripped = stripped.simplified() + "\n";
            socket->write(stripped.toUtf8());

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

void ChatWindow::on_userListWidget_itemDoubleClicked(QListWidgetItem *item)
{

    //only add tab if it doesnt already exist and you haven't clicked on yourself
    int numTabs = tabWidget->count();

    int tabIndex = -1;

    for(int i = 0; i < numTabs; i++){

        if(tabWidget->tabText(i) == item->text()){
            tabIndex = i;
        }

    }

    if(username != item->text() && tabIndex == -1){
        QTime time;
        QTime currentTime = time.currentTime();
        QString initText = "("+currentTime.toString()+") <b>Server</b>: Now chatting with <b>" + item->text() + "</b>";

        addTab(initText, item->text());

        tabIndex = numTabs;

        tabWidget->setCurrentIndex(tabIndex);

    }//if new tab

}

void ChatWindow::addTab(QString initText, QString tabText){

    QTextBrowser *pmTextBrowser = new QTextBrowser(tabWidget);

    pmTextBrowser->setGeometry(-10,-5,542,481);

    pmTextBrowser->setStyleSheet("background: none; background-color: #FFF; border-radius:3px; border: 1px solid #C4C1BD; color: #4C4C4C; padding: 4px;");

    pmTextBrowser->setText(initText);

    tabWidget->addTab(pmTextBrowser, tabText);
}

void ChatWindow::on_tabWidget_tabCloseRequested(int index)
{
    QJsonObject jsonQuitMessage;

    jsonQuitMessage["to"] = tabWidget->tabText(index);
    jsonQuitMessage["from"] = username;

    jsonQuitMessage["is_server"] = QString("TRUE");
    jsonQuitMessage["message"] = QString("has left this private message \n");

    QJsonDocument *jsonDocument = new QJsonDocument(jsonQuitMessage);

    QString stripped = jsonDocument->toJson();
    stripped = stripped.simplified() + "\n";
    socket->write(stripped.toUtf8());

    tabWidget->removeTab(index);

}

void ChatWindow::on_tabWidget_tabBarClicked(int index)
{
    //reset color of tab
    tabWidget->tabBar()->setTabTextColor(tabWidget->currentIndex(), QColor(76,76,76,255));

}
