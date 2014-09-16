/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created: Mon Aug 25 07:12:20 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *labelBalance;
    QLabel *label_6;
    QLabel *labelStake;
    QLabel *label_3;
    QLabel *labelUnconfirmed;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QFrame *line;
    QLabel *labelTotalText;
    QLabel *labelTotal;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;
    QPushButton *unlockWalletButton;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *rbLang_en;
    QRadioButton *rbLang_ru;
    QRadioButton *rbLang_cn;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QTextEdit *txtChat;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnBold;
    QLineEdit *txtChatNick;
    QLineEdit *txtChatMsg;
    QPushButton *btnSmiley;
    QPushButton *btnChatSend;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(732, 548);
        OverviewPage->setStyleSheet(QString::fromUtf8("background-image: url(:/images2/8);\n"
"background-color: rgb(0, 0, 0);"));
        horizontalLayout = new QHBoxLayout(OverviewPage);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QString::fromUtf8("labelWalletStatus"));
        labelWalletStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelWalletStatus->setText(QString::fromUtf8("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setHorizontalSpacing(12);
        formLayout_2->setVerticalSpacing(12);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelBalance->setFont(font1);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0 NAB"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelBalance);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        labelStake = new QLabel(frame);
        labelStake->setObjectName(QString::fromUtf8("labelStake"));
        labelStake->setFont(font1);
        labelStake->setCursor(QCursor(Qt::IBeamCursor));
        labelStake->setText(QString::fromUtf8("0 NAB"));
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelStake);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setFont(font1);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0 NAB"));
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, labelUnconfirmed);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QString::fromUtf8("labelImmatureText"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, labelImmatureText);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QString::fromUtf8("labelImmature"));
        labelImmature->setFont(font1);
        labelImmature->setText(QString::fromUtf8("0 NAB"));
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, labelImmature);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, line);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QString::fromUtf8("labelTotalText"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, labelTotalText);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));
        labelTotal->setFont(font1);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0 NAB"));
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, labelTotal);


        verticalLayout_4->addLayout(formLayout_2);


        verticalLayout_2->addWidget(frame);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        label_2 = new QLabel(OverviewPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/Wallet_Logo")));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QString::fromUtf8("labelTransactionsStatus"));
        labelTransactionsStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QString::fromUtf8("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        listTransactions->setStyleSheet(QString::fromUtf8("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);

        unlockWalletButton = new QPushButton(OverviewPage);
        unlockWalletButton->setObjectName(QString::fromUtf8("unlockWalletButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(unlockWalletButton->sizePolicy().hasHeightForWidth());
        unlockWalletButton->setSizePolicy(sizePolicy);
        unlockWalletButton->setMaximumSize(QSize(16777214, 16777214));
        unlockWalletButton->setStyleSheet(QString::fromUtf8(""));
        unlockWalletButton->setCheckable(false);
        unlockWalletButton->setAutoDefault(false);
        unlockWalletButton->setDefault(true);
        unlockWalletButton->setFlat(false);

        verticalLayout_3->addWidget(unlockWalletButton);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setContentsMargins(10, 10, 10, 10);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout_6->setSpacing(6);
#endif
        horizontalLayout_6->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        rbLang_en = new QRadioButton(OverviewPage);
        rbLang_en->setObjectName(QString::fromUtf8("rbLang_en"));
        rbLang_en->setMinimumSize(QSize(25, 19));
        rbLang_en->setMaximumSize(QSize(25, 19));
        rbLang_en->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_en);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));
        rbLang_en->setChecked(true);

        horizontalLayout_6->addWidget(rbLang_en);

        rbLang_ru = new QRadioButton(OverviewPage);
        rbLang_ru->setObjectName(QString::fromUtf8("rbLang_ru"));
        rbLang_ru->setMinimumSize(QSize(25, 19));
        rbLang_ru->setMaximumSize(QSize(25, 19));
        rbLang_ru->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_ru);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));
        rbLang_ru->setCheckable(true);
        rbLang_ru->setChecked(false);

        horizontalLayout_6->addWidget(rbLang_ru);

        rbLang_cn = new QRadioButton(OverviewPage);
        rbLang_cn->setObjectName(QString::fromUtf8("rbLang_cn"));
        rbLang_cn->setMinimumSize(QSize(25, 19));
        rbLang_cn->setMaximumSize(QSize(25, 19));
        rbLang_cn->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"	subcontrol-position: top center;\n"
"	image: url(:/icons/flag_cn);\n"
" }\n"
"\n"
" QRadioButton::indicator::unchecked {\n"
"	width: 22px;\n"
"	height: 16px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:unchecked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator::checked {\n"
"	background-color: black;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:hover {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }\n"
"\n"
" QRadioButton::indicator:checked:pressed {\n"
"	background-color: blue;\n"
"	width: 25px;\n"
"	height: 19px;\n"
" }"));

        horizontalLayout_6->addWidget(rbLang_cn);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        txtChat = new QTextEdit(OverviewPage);
        txtChat->setObjectName(QString::fromUtf8("txtChat"));
        QFont font2;
        font2.setPointSize(10);
        txtChat->setFont(font2);
        txtChat->setStyleSheet(QString::fromUtf8(""));
        txtChat->setFrameShape(QFrame::Box);
        txtChat->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        txtChat->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        txtChat->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_8->addWidget(txtChat);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btnBold = new QPushButton(OverviewPage);
        btnBold->setObjectName(QString::fromUtf8("btnBold"));
        btnBold->setMaximumSize(QSize(20, 16777215));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        btnBold->setFont(font3);
#ifndef QT_NO_TOOLTIP
        btnBold->setToolTip(QString::fromUtf8("<html><head/><body><p><span style=\" font-weight:600;\">10 CHAT</span></p></body></html>"));
#endif // QT_NO_TOOLTIP
        btnBold->setShortcut(QString::fromUtf8(""));
        btnBold->setCheckable(true);

        horizontalLayout_5->addWidget(btnBold);

        txtChatNick = new QLineEdit(OverviewPage);
        txtChatNick->setObjectName(QString::fromUtf8("txtChatNick"));
        txtChatNick->setMaximumSize(QSize(150, 16777215));
        txtChatNick->setFont(font3);
        txtChatNick->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        txtChatNick->setMaxLength(20);

        horizontalLayout_5->addWidget(txtChatNick);

        txtChatMsg = new QLineEdit(OverviewPage);
        txtChatMsg->setObjectName(QString::fromUtf8("txtChatMsg"));
        txtChatMsg->setFont(font2);
        txtChatMsg->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        txtChatMsg->setMaxLength(140);

        horizontalLayout_5->addWidget(txtChatMsg);

        btnSmiley = new QPushButton(OverviewPage);
        btnSmiley->setObjectName(QString::fromUtf8("btnSmiley"));
        btnSmiley->setFont(font2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/smiley-button"), QSize(), QIcon::Normal, QIcon::Off);
        btnSmiley->setIcon(icon);

        horizontalLayout_5->addWidget(btnSmiley);

        btnChatSend = new QPushButton(OverviewPage);
        btnChatSend->setObjectName(QString::fromUtf8("btnChatSend"));
        btnChatSend->setFont(font2);

        horizontalLayout_5->addWidget(btnChatSend);


        verticalLayout_7->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_7);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OverviewPage", "Wallet", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the NavajoAnonBeta/NavajoAnonBeta network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OverviewPage", "Spendable:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("OverviewPage", "Stake:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OverviewPage", "Unconfirmed:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QString());
        label_4->setText(QApplication::translate("OverviewPage", "<b>Recent transactions</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the NavajoAnonBeta/NavajoAnonBeta network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        unlockWalletButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        unlockWalletButton->setText(QApplication::translate("OverviewPage", "wallet unlock button", 0, QApplication::UnicodeUTF8));
        rbLang_en->setText(QString());
        rbLang_ru->setText(QString());
        rbLang_cn->setText(QString());
        btnBold->setText(QApplication::translate("OverviewPage", "B", 0, QApplication::UnicodeUTF8));
        txtChatNick->setInputMask(QString());
        txtChatNick->setText(QString());
        txtChatMsg->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnSmiley->setToolTip(QApplication::translate("OverviewPage", "List of emoticons", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnChatSend->setToolTip(QApplication::translate("OverviewPage", "1 CHAT", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnChatSend->setText(QApplication::translate("OverviewPage", "Send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
