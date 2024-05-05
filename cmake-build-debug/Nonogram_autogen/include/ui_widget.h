/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *start;
    QPushButton *add_new_nonogram;
    QPushButton *exit;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *profileScore_lineEdit;
    QPushButton *updateScore_button;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1176, 874);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        start = new QPushButton(Widget);
        start->setObjectName(QString::fromUtf8("start"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(start->sizePolicy().hasHeightForWidth());
        start->setSizePolicy(sizePolicy);
        start->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(start);

        add_new_nonogram = new QPushButton(Widget);
        add_new_nonogram->setObjectName(QString::fromUtf8("add_new_nonogram"));
        sizePolicy.setHeightForWidth(add_new_nonogram->sizePolicy().hasHeightForWidth());
        add_new_nonogram->setSizePolicy(sizePolicy);
        add_new_nonogram->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(add_new_nonogram);

        exit = new QPushButton(Widget);
        exit->setObjectName(QString::fromUtf8("exit"));
        sizePolicy.setHeightForWidth(exit->sizePolicy().hasHeightForWidth());
        exit->setSizePolicy(sizePolicy);
        exit->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(exit);


        gridLayout->addLayout(verticalLayout, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        profileScore_lineEdit = new QLineEdit(Widget);
        profileScore_lineEdit->setObjectName(QString::fromUtf8("profileScore_lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(profileScore_lineEdit->sizePolicy().hasHeightForWidth());
        profileScore_lineEdit->setSizePolicy(sizePolicy1);
        profileScore_lineEdit->setMinimumSize(QSize(0, 75));
        profileScore_lineEdit->setReadOnly(true);

        gridLayout->addWidget(profileScore_lineEdit, 1, 1, 1, 1);

        updateScore_button = new QPushButton(Widget);
        updateScore_button->setObjectName(QString::fromUtf8("updateScore_button"));
        sizePolicy1.setHeightForWidth(updateScore_button->sizePolicy().hasHeightForWidth());
        updateScore_button->setSizePolicy(sizePolicy1);
        updateScore_button->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(updateScore_button, 2, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        start->setText(QCoreApplication::translate("Widget", "Start", nullptr));
        add_new_nonogram->setText(QCoreApplication::translate("Widget", "Choose Nonogram", nullptr));
        exit->setText(QCoreApplication::translate("Widget", "Exit", nullptr));
        updateScore_button->setText(QCoreApplication::translate("Widget", "Update Score", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
