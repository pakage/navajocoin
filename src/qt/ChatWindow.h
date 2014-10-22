#include <QMainWindow>
#include <QTcpSocket>
#include <QBasicTimer>

#include "ui_ChatWindow.h"

class ChatWindow : public QMainWindow, public Ui::ChatWindow
{
    Q_OBJECT

    public:

        ChatWindow(QWidget *parent=0);

    private slots:

        void on_loginButton_clicked();

        void on_sayButton_clicked();

        void readyRead();

        void connected();

        void on_logoutButton_clicked();

        void on_sayLineEdit_returnPressed();

        void on_roomTextBrowser_anchorClicked(QUrl url);

protected:

        void timerEvent(QTimerEvent *event);

        void postMessage();

    private:

        QTcpSocket *socket;

        QBasicTimer timer;

        bool messageAllowed = true;

        int messageTimeout = 3000;

        bool isChecked;

};
