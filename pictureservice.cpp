//
// Created by zgdarya on 4/27/24.
//

// You may need to build the project (run Qt uic code generator) to get "ui_PictureService.h" resolved

#include "pictureservice.h"
#include "ui_pictureservice.h"
const long WHITE_NUMBER = 4294967295;

PictureService::PictureService(QWidget *parent) :
        QWidget(parent), ui(new Ui::PictureService) {
    ui->setupUi(this);
    //ui->nonogram->setMaximumSize(parent->width(), parent->height());
    connect(ui->nonogram, SIGNAL(cellClicked(int, int)),
            this, SLOT(on_nonogram_cellClicked(int, int)));
}

PictureService::~PictureService() {
    delete ui;
}

void PictureService::createNonogram(QImage image) {
    QSize size = image.size();

    if (size != QSize(0, 0)) {
        ui->nonogram->setWindowState(Qt::WindowFullScreen);
        ui->nonogram->setRowCount(size.height() + 1);
        ui->nonogram->setColumnCount(size.width() + 1);
        ui->nonogram->setEditTriggers(QAbstractItemView::NoEditTriggers);

        int delta = (ui->nonogram->height() - 100) / size.height();

        for (int i = 1; i < size.width() + 1; ++i) {
            ui->nonogram->setRowHeight(i, delta);
            ui->nonogram->setColumnWidth(i, delta);
        }
        ui->nonogram->setRowHeight(0, ui->nonogram->height() - size.height() * delta);
        //ui->nonogram->setItem(new QTableWidgetItem->setBackground(QBrush(QColor())))
        ui->nonogram->setColumnWidth(0, ui->nonogram->width() - size.width() * delta);

        for (int i = 0; i < size.width(); ++i) {
            for (int j = 0; j < size.height(); ++j) {
                if (image.pixel(i, j) == WHITE_NUMBER) {
                    matrix20[i][j] = 0;
                }
                else {
                    matrix20[i][j] = 1;
                }
            }
        }

        QString numbers;
        for (int i = 0, column = 0; i < size.height(); ++i) {
            for (int j = 0; j < size.width(); ++j) {
                if (matrix20[i][j]) { column++; }
                else if (column != 0) {
                    numbers += QString::number(column) + QString("\n");
                    column = 0;
                }
            }
            if (column != 0){
                numbers += QString::number(column) + QString("\n");
                column = 0;
            }
            ui->nonogram->setItem(0, i + 1, new QTableWidgetItem(numbers));
            numbers.clear();
        }
        for (int j = 0, row = 0; j < size.width(); ++j) {
            for (int i = 0; i < size.height(); ++i) {
                if (matrix20[i][j]) { ++row; }
                else if (row != 0) {
                    numbers += QString::number(row) + QString(' ');
                    row = 0;
                }
            }
            if (row != 0) {
                numbers += QString::number(row) + QString(' ');
                row = 0;
            }
            ui->nonogram->setItem(j + 1, 0, new QTableWidgetItem(numbers));
            numbers.clear();
        }

        for (int i = 1; i < size.height() + 1; ++i) {
            if (ui->nonogram->item(i, 0)->text() == "") {
                for (int j = 1; j < size.width() + 1; ++j) {
                    ui->nonogram->setItem(i, j, new QTableWidgetItem(QString("❌")));
                    ui->nonogram->item(i,j)->setTextAlignment(Qt::AlignCenter);
                }
            }
        }
        for (int j = 1; j < size.width() + 1; ++j) {
            if (ui->nonogram->item(0, j)->text() == "") {
                for (int i = 1; i < size.width() + 1; ++i) {
                    ui->nonogram->setItem(i, j, new QTableWidgetItem(QString("❌")));
                    ui->nonogram->item(i,j)->setTextAlignment(Qt::AlignCenter);
                }
            }
        }
        qDebug() << "Table was created";
    }
}

void PictureService::on_nonogram_cellClicked(int row, int column) {
    ui->nonogram->setItem(row, column, new QTableWidgetItem);
    if (matrix20[row - 1][column - 1] == 1) {
        ui->nonogram->item(row, column)->setBackground(Qt::black);
    }
    else {
        ui->nonogram->setItem(row, column, new QTableWidgetItem(QString("❌")));
        ui->nonogram->item(row,column)->setTextAlignment(Qt::AlignCenter);
    }
}
