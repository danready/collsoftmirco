/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *CheckDrvRestitution;
    QDialogButtonBox *buttonBoxRestitution;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(577, 540);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        CheckDrvRestitution = new QTextEdit(Dialog);
        CheckDrvRestitution->setObjectName(QStringLiteral("CheckDrvRestitution"));
        CheckDrvRestitution->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        CheckDrvRestitution->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        CheckDrvRestitution->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        CheckDrvRestitution->setLineWrapMode(QTextEdit::NoWrap);
        CheckDrvRestitution->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(CheckDrvRestitution, 0, 0, 1, 1);

        buttonBoxRestitution = new QDialogButtonBox(Dialog);
        buttonBoxRestitution->setObjectName(QStringLiteral("buttonBoxRestitution"));
        buttonBoxRestitution->setOrientation(Qt::Horizontal);
        buttonBoxRestitution->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBoxRestitution, 1, 0, 1, 1);


        retranslateUi(Dialog);
        QObject::connect(buttonBoxRestitution, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBoxRestitution, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Accept Request", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
