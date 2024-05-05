/********************************************************************************
** Form generated from reading UI file 'pictureservice.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURESERVICE_H
#define UI_PICTURESERVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PictureService
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QTableWidget *nonogram;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *timer;
    QLineEdit *mistakes;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *PictureService)
    {
        if (PictureService->objectName().isEmpty())
            PictureService->setObjectName(QString::fromUtf8("PictureService"));
        PictureService->resize(1141, 834);
        gridLayout = new QGridLayout(PictureService);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        nonogram = new QTableWidget(PictureService);
        nonogram->setObjectName(QString::fromUtf8("nonogram"));
        nonogram->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nonogram->sizePolicy().hasHeightForWidth());
        nonogram->setSizePolicy(sizePolicy);
        nonogram->setMinimumSize(QSize(800, 800));
        nonogram->setMaximumSize(QSize(5000, 5000));
        nonogram->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        nonogram->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        nonogram->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        nonogram->horizontalHeader()->setVisible(false);
        nonogram->horizontalHeader()->setHighlightSections(true);
        nonogram->verticalHeader()->setVisible(false);
        nonogram->verticalHeader()->setHighlightSections(true);

        gridLayout->addWidget(nonogram, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        timer = new QLineEdit(PictureService);
        timer->setObjectName(QString::fromUtf8("timer"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(timer->sizePolicy().hasHeightForWidth());
        timer->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(timer);

        mistakes = new QLineEdit(PictureService);
        mistakes->setObjectName(QString::fromUtf8("mistakes"));
        sizePolicy1.setHeightForWidth(mistakes->sizePolicy().hasHeightForWidth());
        mistakes->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(mistakes);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        gridLayout->addLayout(verticalLayout, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);


        retranslateUi(PictureService);

        QMetaObject::connectSlotsByName(PictureService);
    } // setupUi

    void retranslateUi(QWidget *PictureService)
    {
        PictureService->setWindowTitle(QCoreApplication::translate("PictureService", "PictureService", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PictureService: public Ui_PictureService {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURESERVICE_H
