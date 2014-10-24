#include <QMainWindow>
#include <QTcpSocket>
#include <QBasicTimer>
#include <bitcoingui.h>
#include <QTextBrowser>

#include "ui_ChatWindow.h"

class ChatWindow : public QMainWindow, public Ui::ChatWindow
{
    Q_OBJECT

    public:

        ChatWindow(QWidget *parent=0);

        void setGUI(BitcoinGUI* const);

    private slots:

        void on_loginButton_clicked();

        void on_sayButton_clicked();

        void readyRead();

        void connected();

        void on_logoutButton_clicked();

        void on_sayLineEdit_returnPressed();

        void on_roomTextBrowser_anchorClicked(QUrl url);

        void on_userListWidget_itemDoubleClicked(QListWidgetItem *item);

        void on_tabWidget_tabCloseRequested(int index);



        void on_tabWidget_tabBarClicked(int index);

protected:

        void timerEvent(QTimerEvent *event);

        void postMessage();

    private:

        QTcpSocket *socket;

        QBasicTimer timer;

        bool messageAllowed = true;

        int messageTimeout = 3000;

        bool isChecked;

        BitcoinGUI* bitcoinGUI;

        QString username;

        void addTab(QString initText, QString tabText);

        QTextBrowser *roomTextBrowser;

        bool userChecked = false;

};
