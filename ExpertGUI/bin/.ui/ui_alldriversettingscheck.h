/********************************************************************************
** Form generated from reading UI file 'alldriversettingscheck.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLDRIVERSETTINGSCHECK_H
#define UI_ALLDRIVERSETTINGSCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AllDriverSettingsCheck
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *LineEditAllDriverSettingsCheck;

    void setupUi(QDialog *AllDriverSettingsCheck)
    {
        if (AllDriverSettingsCheck->objectName().isEmpty())
            AllDriverSettingsCheck->setObjectName(QStringLiteral("AllDriverSettingsCheck"));
        AllDriverSettingsCheck->resize(511, 371);
        buttonBox = new QDialogButtonBox(AllDriverSettingsCheck);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(90, 330, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        LineEditAllDriverSettingsCheck = new QTextEdit(AllDriverSettingsCheck);
        LineEditAllDriverSettingsCheck->setObjectName(QStringLiteral("LineEditAllDriverSettingsCheck"));
        LineEditAllDriverSettingsCheck->setGeometry(QRect(30, 20, 451, 301));
        QPalette palette;
        QBrush brush(QColor(242, 241, 240, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LineEditAllDriverSettingsCheck->setPalette(palette);
        LineEditAllDriverSettingsCheck->setFrameShape(QFrame::NoFrame);
        LineEditAllDriverSettingsCheck->setTextInteractionFlags(Qt::TextSelectableByMouse);

        retranslateUi(AllDriverSettingsCheck);
        QObject::connect(buttonBox, SIGNAL(accepted()), AllDriverSettingsCheck, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AllDriverSettingsCheck, SLOT(reject()));

        QMetaObject::connectSlotsByName(AllDriverSettingsCheck);
    } // setupUi

    void retranslateUi(QDialog *AllDriverSettingsCheck)
    {
        AllDriverSettingsCheck->setWindowTitle(QApplication::translate("AllDriverSettingsCheck", "Accept drivers setting", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAllDriverSettingsCheck->setToolTip(QApplication::translate("AllDriverSettingsCheck", "Drivers setting briefing", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class AllDriverSettingsCheck: public Ui_AllDriverSettingsCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLDRIVERSETTINGSCHECK_H
