/********************************************************************************
** Form generated from reading UI file 'ChatWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *chatPage;
    QGridLayout *gridLayout;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QLineEdit *sayLineEdit;
    QPushButton *sayButton;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_3;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QPushButton *logoutButton;
    QListWidget *userListWidget;
    QFrame *verticalFrame1;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *loginPage1;
    QGridLayout *gridLayout_3;
    QWidget *loginPage;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_9;
    QFrame *loginFrame;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QLineEdit *serverLineEdit;
    QLabel *label_7;
    QLineEdit *userLineEdit;
    QCheckBox *rememberCheckBox;
    QLabel *errorMessageLabel;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *registerButton;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_4;
    QWidget *registerPage;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QFrame *gridFrame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton;
    QLabel *registerError;
    QSpacerItem *horizontalSpacer_2;
    QTableView *addressTableView;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *ChatWindow)
    {
        if (ChatWindow->objectName().isEmpty())
            ChatWindow->setObjectName(QStringLiteral("ChatWindow"));
        ChatWindow->resize(800, 600);
        ChatWindow->setStyleSheet(QLatin1String("#titleLabel {\n"
"background: white;\n"
"color: black;\n"
"font-size: 20px;\n"
"border: none;\n"
"border-bottom:  1px solid black;\n"
"padding: 5px;\n"
"}\n"
"\n"
"#mainFrame {\n"
"border: none;\n"
"background: white;\n"
"}\n"
"\n"
"#loginFrame {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ddf, stop: 1 #aaf);\n"
"border: 1px solid gray;\n"
"padding: 10px;\n"
"border-radius: 25px;\n"
"}"));
        centralwidget = new QWidget(ChatWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(centralwidget);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setStyleSheet(QStringLiteral("background-color: #F2F1F0;"));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        verticalLayout_2 = new QVBoxLayout(mainFrame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 9);
        stackedWidget = new QStackedWidget(mainFrame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral("background-image:url(:/images/res/images/nav-bg.jpg)"));
        chatPage = new QWidget();
        chatPage->setObjectName(QStringLiteral("chatPage"));
        gridLayout = new QGridLayout(chatPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalFrame = new QFrame(chatPage);
        horizontalFrame->setObjectName(QStringLiteral("horizontalFrame"));
        horizontalFrame->setMaximumSize(QSize(16777215, 29));
        horizontalFrame->setStyleSheet(QStringLiteral("background:none"));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sayLineEdit = new QLineEdit(horizontalFrame);
        sayLineEdit->setObjectName(QStringLiteral("sayLineEdit"));
        sayLineEdit->setStyleSheet(QLatin1String("background: none;\n"
"background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"border-left: none;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"margin-right:6px;"));
        sayLineEdit->setMaxLength(3000);

        horizontalLayout->addWidget(sayLineEdit);

        sayButton = new QPushButton(horizontalFrame);
        sayButton->setObjectName(QStringLiteral("sayButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sayButton->sizePolicy().hasHeightForWidth());
        sayButton->setSizePolicy(sizePolicy);
        sayButton->setMaximumSize(QSize(16777215, 16777215));
        sayButton->setStyleSheet(QLatin1String("background: none;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout->addWidget(sayButton);


        gridLayout->addWidget(horizontalFrame, 2, 0, 1, 5);

        verticalFrame = new QFrame(chatPage);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
        verticalFrame->setMaximumSize(QSize(200, 16777215));
        verticalFrame->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
""));
        verticalLayout_3 = new QVBoxLayout(verticalFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 0, 3, 3);
        horizontalWidget = new QWidget(verticalFrame);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        horizontalWidget->setStyleSheet(QStringLiteral("border:none;"));
        horizontalLayout_2 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("border:none;\n"
"padding: 0 0 6px 0;"));

        horizontalLayout_2->addWidget(label_3);

        logoutButton = new QPushButton(horizontalWidget);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setMaximumSize(QSize(20, 16777215));
        logoutButton->setStyleSheet(QLatin1String("background: none;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 0;\n"
"margin-bottom: 4px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/res/icons/power.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutButton->setIcon(icon);

        horizontalLayout_2->addWidget(logoutButton);


        verticalLayout_3->addWidget(horizontalWidget);

        userListWidget = new QListWidget(verticalFrame);
        userListWidget->setObjectName(QStringLiteral("userListWidget"));
        userListWidget->setStyleSheet(QStringLiteral("background-color: #FFF;"));

        verticalLayout_3->addWidget(userListWidget);


        gridLayout->addWidget(verticalFrame, 0, 4, 2, 1);

        verticalFrame1 = new QFrame(chatPage);
        verticalFrame1->setObjectName(QStringLiteral("verticalFrame1"));
        verticalFrame1->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
""));
        verticalLayout_4 = new QVBoxLayout(verticalFrame1);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(3, 0, 3, 3);
        tabWidget = new QTabWidget(verticalFrame1);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral("background-color: #FFF;"));

        verticalLayout_4->addWidget(tabWidget);


        gridLayout->addWidget(verticalFrame1, 0, 0, 2, 4);

        stackedWidget->addWidget(chatPage);
        loginPage1 = new QWidget();
        loginPage1->setObjectName(QStringLiteral("loginPage1"));
        gridLayout_3 = new QGridLayout(loginPage1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        stackedWidget->addWidget(loginPage1);
        loginPage = new QWidget();
        loginPage->setObjectName(QStringLiteral("loginPage"));
        verticalLayoutWidget_2 = new QWidget(loginPage);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 781, 581));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 40, -1, -1);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMinimumSize(QSize(320, 0));
        label_5->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(14);
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;\n"
"color: #4C4C4C;\n"
"padding: 5px 20px;"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 40, -1, -1);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        loginFrame = new QFrame(verticalLayoutWidget_2);
        loginFrame->setObjectName(QStringLiteral("loginFrame"));
        sizePolicy.setHeightForWidth(loginFrame->sizePolicy().hasHeightForWidth());
        loginFrame->setSizePolicy(sizePolicy);
        loginFrame->setMinimumSize(QSize(320, 0));
        loginFrame->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;"));
        loginFrame->setFrameShape(QFrame::StyledPanel);
        gridLayout_4 = new QGridLayout(loginFrame);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(12);
        gridLayout_4->setVerticalSpacing(6);
        gridLayout_4->setContentsMargins(6, 6, 6, 6);
        label_6 = new QLabel(loginFrame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color: #4C4C4C;"));

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        serverLineEdit = new QLineEdit(loginFrame);
        serverLineEdit->setObjectName(QStringLiteral("serverLineEdit"));
        serverLineEdit->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"margin: 0px 6px 0px 0px;\n"
"color: #4C4C4C;"));

        gridLayout_4->addWidget(serverLineEdit, 0, 1, 1, 1);

        label_7 = new QLabel(loginFrame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color: #4C4C4C;"));

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        userLineEdit = new QLineEdit(loginFrame);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));
        userLineEdit->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"margin: 0px 6px 0px 0px;\n"
"color: #4C4C4C;"));
        userLineEdit->setMaxLength(20);

        gridLayout_4->addWidget(userLineEdit, 1, 1, 1, 1);

        rememberCheckBox = new QCheckBox(loginFrame);
        rememberCheckBox->setObjectName(QStringLiteral("rememberCheckBox"));

        gridLayout_4->addWidget(rememberCheckBox, 3, 1, 1, 1);

        errorMessageLabel = new QLabel(loginFrame);
        errorMessageLabel->setObjectName(QStringLiteral("errorMessageLabel"));
        errorMessageLabel->setMaximumSize(QSize(16777215, 0));
        errorMessageLabel->setStyleSheet(QStringLiteral("color:#BF3A2B"));

        gridLayout_4->addWidget(errorMessageLabel, 2, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, 6, -1);
        loginButton = new QPushButton(loginFrame);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy2);
        loginButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout_6->addWidget(loginButton);

        horizontalSpacer_8 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        registerButton = new QPushButton(loginFrame);
        registerButton->setObjectName(QStringLiteral("registerButton"));
        sizePolicy2.setHeightForWidth(registerButton->sizePolicy().hasHeightForWidth());
        registerButton->setSizePolicy(sizePolicy2);
        registerButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout_6->addWidget(registerButton);


        gridLayout_4->addLayout(horizontalLayout_6, 5, 1, 1, 1);


        horizontalLayout_7->addWidget(loginFrame);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);


        verticalLayout_6->addLayout(horizontalLayout_7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        stackedWidget->addWidget(loginPage);
        registerPage = new QWidget();
        registerPage->setObjectName(QStringLiteral("registerPage"));
        verticalLayoutWidget = new QWidget(registerPage);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 781, 581));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 40, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(320, 0));
        label_4->setBaseSize(QSize(0, 0));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;\n"
"color: #4C4C4C;\n"
"padding: 5px 20px;"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(6, 6, 6, 6);
        gridFrame = new QFrame(verticalLayoutWidget);
        gridFrame->setObjectName(QStringLiteral("gridFrame"));
        gridFrame->setMinimumSize(QSize(600, 0));
        gridFrame->setStyleSheet(QLatin1String("background: none;\n"
"background-color: #F2F1F0;\n"
"border-radius: 3px;\n"
"color: #4C4C4C;"));
        gridLayout_2 = new QGridLayout(gridFrame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lineEdit = new QLineEdit(gridFrame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"color: #4C4C4C;"));

        horizontalLayout_8->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_8, 4, 1, 1, 1);

        label_2 = new QLabel(gridFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 1, 1, 1);

        label = new QLabel(gridFrame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        pushButton = new QPushButton(gridFrame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);
        pushButton->setStyleSheet(QLatin1String("background: none;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout_9->addWidget(pushButton);

        registerError = new QLabel(gridFrame);
        registerError->setObjectName(QStringLiteral("registerError"));

        horizontalLayout_9->addWidget(registerError);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_9, 5, 1, 1, 1);

        addressTableView = new QTableView(gridFrame);
        addressTableView->setObjectName(QStringLiteral("addressTableView"));
        addressTableView->setStyleSheet(QLatin1String("background-color: rgb(255,255,255);\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px;\n"
"color: #4C4C4C;"));

        gridLayout_2->addWidget(addressTableView, 1, 1, 1, 1);


        horizontalLayout_3->addWidget(gridFrame);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, -1, 6, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy3.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy3);
        pushButton_2->setStyleSheet(QLatin1String("background: none;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgb(240,240,240), stop:1 rgb(255, 255, 255));\n"
"border-radius:3px;\n"
"border: 1px solid #C4C1BD;\n"
"color: #4C4C4C;\n"
"padding: 4px 12px;"));

        horizontalLayout_10->addWidget(pushButton_2);


        verticalLayout_5->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        stackedWidget->addWidget(registerPage);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout->addWidget(mainFrame);

        ChatWindow->setCentralWidget(centralwidget);

        retranslateUi(ChatWindow);

        stackedWidget->setCurrentIndex(3);
        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ChatWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChatWindow)
    {
        ChatWindow->setWindowTitle(QApplication::translate("ChatWindow", "ChatWindow", 0));
        sayButton->setText(QApplication::translate("ChatWindow", "Send", 0));
        label_3->setText(QApplication::translate("ChatWindow", "User list", 0));
        logoutButton->setText(QString());
        label_5->setText(QApplication::translate("ChatWindow", "TALK NAVAJO", 0));
        label_6->setText(QApplication::translate("ChatWindow", "Base Camp:", 0));
        serverLineEdit->setText(QApplication::translate("ChatWindow", "talkincode.servehttp.com", 0));
        label_7->setText(QApplication::translate("ChatWindow", "Username:", 0));
        rememberCheckBox->setText(QApplication::translate("ChatWindow", "remember me", 0));
        errorMessageLabel->setText(QString());
        loginButton->setText(QApplication::translate("ChatWindow", "Login", 0));
        registerButton->setText(QApplication::translate("ChatWindow", "Register", 0));
        label_4->setText(QApplication::translate("ChatWindow", "REGISTER USERNAME", 0));
        label_2->setText(QApplication::translate("ChatWindow", "Emaid Address (optional):", 0));
        label->setText(QApplication::translate("ChatWindow", "Wallet address:", 0));
        pushButton->setText(QApplication::translate("ChatWindow", "Register", 0));
        registerError->setText(QApplication::translate("ChatWindow", "Already Registerd", 0));
        pushButton_2->setText(QApplication::translate("ChatWindow", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ChatWindow: public Ui_ChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
