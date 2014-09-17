/********************************************************************************
** Form generated from reading UI file 'sendcoinsentry.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSENTRY_H
#define UI_SENDCOINSENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendCoinsEntry
{
public:
    QGridLayout *gridLayout;
    BitcoinAmountField *payAmount;
    QHBoxLayout *payToLayout;
    QValidatedLineEdit *payTo;
    QToolButton *addressBookButton;
    QToolButton *pasteButton;
    QToolButton *deleteButton;
    QLabel *label_5;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QValidatedLineEdit *addAsLabel;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QPushButton *gonavanjoButton;

    void setupUi(QFrame *SendCoinsEntry)
    {
        if (SendCoinsEntry->objectName().isEmpty())
            SendCoinsEntry->setObjectName(QStringLiteral("SendCoinsEntry"));
        SendCoinsEntry->resize(731, 230);
        SendCoinsEntry->setStyleSheet(QStringLiteral("background-image: url(:/images2/8);"));
        SendCoinsEntry->setFrameShape(QFrame::StyledPanel);
        SendCoinsEntry->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(SendCoinsEntry);
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        payAmount = new BitcoinAmountField(SendCoinsEntry);
        payAmount->setObjectName(QStringLiteral("payAmount"));

        gridLayout->addWidget(payAmount, 9, 1, 1, 1);

        payToLayout = new QHBoxLayout();
        payToLayout->setSpacing(0);
        payToLayout->setObjectName(QStringLiteral("payToLayout"));
        payTo = new QValidatedLineEdit(SendCoinsEntry);
        payTo->setObjectName(QStringLiteral("payTo"));
        payTo->setMaxLength(34);

        payToLayout->addWidget(payTo);

        addressBookButton = new QToolButton(SendCoinsEntry);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);

        payToLayout->addWidget(addressBookButton);

        pasteButton = new QToolButton(SendCoinsEntry);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon1);

        payToLayout->addWidget(pasteButton);

        deleteButton = new QToolButton(SendCoinsEntry);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);

        payToLayout->addWidget(deleteButton);


        gridLayout->addLayout(payToLayout, 4, 1, 1, 1);

        label_5 = new QLabel(SendCoinsEntry);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(SendCoinsEntry);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 8, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addAsLabel = new QValidatedLineEdit(SendCoinsEntry);
        addAsLabel->setObjectName(QStringLiteral("addAsLabel"));
        addAsLabel->setEnabled(true);

        horizontalLayout_2->addWidget(addAsLabel);


        gridLayout->addLayout(horizontalLayout_2, 8, 1, 1, 1);

        label_2 = new QLabel(SendCoinsEntry);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label = new QLabel(SendCoinsEntry);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 9, 0, 1, 1);

        lineEdit_2 = new QLineEdit(SendCoinsEntry);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit = new QLineEdit(SendCoinsEntry);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 6, 1, 1, 1);

        label_3 = new QLabel(SendCoinsEntry);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        gonavanjoButton = new QPushButton(SendCoinsEntry);
        gonavanjoButton->setObjectName(QStringLiteral("gonavanjoButton"));

        gridLayout->addWidget(gonavanjoButton, 7, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(addAsLabel);
        label_2->setBuddy(payTo);
        label->setBuddy(payAmount);
#endif // QT_NO_SHORTCUT

        retranslateUi(SendCoinsEntry);

        QMetaObject::connectSlotsByName(SendCoinsEntry);
    } // setupUi

    void retranslateUi(QFrame *SendCoinsEntry)
    {
        SendCoinsEntry->setWindowTitle(QApplication::translate("SendCoinsEntry", "Form", 0));
#ifndef QT_NO_TOOLTIP
        payTo->setToolTip(QApplication::translate("SendCoinsEntry", "The address to send the payment to  (e.g. sjz75uKHzUQJnSdzvpiigEGxseKkDhQToX)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("SendCoinsEntry", "Choose address from address book", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+A", 0));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Paste address from clipboard", 0));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
        pasteButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+P", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Remove this recipient", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QString());
        label_5->setText(QApplication::translate("SendCoinsEntry", "Transaction Comment:", 0));
        label_4->setText(QApplication::translate("SendCoinsEntry", "&Label:", 0));
#ifndef QT_NO_TOOLTIP
        addAsLabel->setToolTip(QApplication::translate("SendCoinsEntry", "Enter a label for this address to add it to your address book", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("SendCoinsEntry", "Pay &To:", 0));
        label->setText(QApplication::translate("SendCoinsEntry", "A&mount:", 0));
        label_3->setText(QApplication::translate("SendCoinsEntry", "Preferred Navajo Node:", 0));
        gonavanjoButton->setText(QApplication::translate("SendCoinsEntry", "Go Navajo", 0));
    } // retranslateUi

};

namespace Ui {
    class SendCoinsEntry: public Ui_SendCoinsEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSENTRY_H
