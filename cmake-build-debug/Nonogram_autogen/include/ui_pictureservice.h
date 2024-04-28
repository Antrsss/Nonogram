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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PictureService
{
public:
    QGridLayout *gridLayout;
    QTableWidget *nonogram;

    void setupUi(QWidget *PictureService)
    {
        if (PictureService->objectName().isEmpty())
            PictureService->setObjectName(QString::fromUtf8("PictureService"));
        PictureService->resize(1083, 819);
        gridLayout = new QGridLayout(PictureService);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nonogram = new QTableWidget(PictureService);
        nonogram->setObjectName(QString::fromUtf8("nonogram"));
        nonogram->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nonogram->sizePolicy().hasHeightForWidth());
        nonogram->setSizePolicy(sizePolicy);
        nonogram->setMinimumSize(QSize(800, 800));
        nonogram->setMaximumSize(QSize(800, 800));
        nonogram->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        nonogram->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        nonogram->horizontalHeader()->setVisible(false);
        nonogram->horizontalHeader()->setHighlightSections(true);
        nonogram->verticalHeader()->setVisible(false);
        nonogram->verticalHeader()->setHighlightSections(true);

        gridLayout->addWidget(nonogram, 0, 0, 1, 1);


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
