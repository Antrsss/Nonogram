#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    Picture picture;
}

Widget::~Widget()
{
    delete ui;
}

/*void Widget::paintEvent(QPaintEvent *, QString path) {
    *//*QPainter painter;
    painter.begin(this);
    painter.drawPixmap(0, 0, QPixmap("/home/zgdarya/QTWORKS/Nonogram/strawberry.jpg"));
    QBitmap bitmap(QPixmap("../strawberry.jpg"));*//*
    QPixmap *ii = new QBitmap(QPixmap(path));
    QPainter p(this);
    p.drawPixmap(10,10, *ii);
    p.end();
    //QImage * image  = new QImage("/home/zgdarya/QTWORKS/Task1/Untitled.jpeg");
    //painter.end();
}*/


void Widget::on_add_new_nonogram_clicked()
{
    _path = QFileDialog::getOpenFileName(nullptr, "Open Files", "../Pictures", "png file (*.png);;");
}

void Widget::createNonogram(QImage image) {
    _size = image.size();

    if (_size != QSize(0, 0)) {
        QTableWidget *nonogram = new QTableWidget(_size.width() + 1, _size.height() + 1, this);
        //nonogram->setHorizontalHeader();
        nonogram->resize(this->width(), this->height());
        nonogram->setEditTriggers(QAbstractItemView::NoEditTriggers);

        for (int i = 1; i < _size.width(); ++i) {
            nonogram->setRowHeight(i, (this->height() - 50) / _size.height());
            nonogram->setColumnWidth(i, (this->width() - 50) / _size.width());
        }

        nonogram->setRowHeight(0, 32);
        nonogram->setColumnWidth(0, 32);

        for (int i = 0; i < _size.width(); ++i) {
            for (int j = 0; j < _size.height(); ++j) {
                if (image.pixel(i, j) == 4294967295) {
                    matrix20[i][j] = 0;
                }
                else {
                    matrix20[i][j] = 1;
                }
            }
        }

        QString numbers;
        for (int i = 0, column = 0; i < _size.height(); ++i) {
            for (int j = 0; j < _size.width(); ++j) {
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
            nonogram->setItem(0, i + 1, new QTableWidgetItem(numbers));
            numbers.clear();
        }
        for (int j = 0, row = 0; j < _size.width(); ++j) {
            for (int i = 0; i < _size.height(); ++i) {
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
            nonogram->setItem(j + 1, 0, new QTableWidgetItem(numbers));
            numbers.clear();
        }

        nonogram->show();
        
        qDebug() << "Table was created";
    }
}

void Widget::on_exit_clicked()
{
    close();
}


void Widget::on_start_clicked()
{
    Picture picture;
    picture.image = QImage(_path);
    createNonogram(picture.image);
}

