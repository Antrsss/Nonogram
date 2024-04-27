#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter;
    QRect *rect = new QRect(0, 0, this->width(), this->height());
    painter->begin(this);
    QImage * image  = new QImage("/home/zgdarya/QTWORKS/Nonogram/Files/Sakura.jpg");
    painter->drawImage(*rect,*image);
    painter->end();
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
    //QImage * _image  = new QImage("/home/zgdarya/QTWORKS/Task1/Untitled.jpeg");
    //painter.end();
}*/


void Widget::on_add_new_nonogram_clicked()
{
    _path = QFileDialog::getOpenFileName(nullptr, "Open Files", "../Pictures", "png file (*.png);;");
}

void Widget::on_exit_clicked()
{
    close();
}


void Widget::on_start_clicked()
{
    PictureService* pictureService = new PictureService(this);
    //pictureService->setWindowState(Qt::WindowFullScreen);
    pictureService->resize(this->width(), this->height());
    Picture picture;
    picture._image = QImage(_path);
    pictureService->createNonogram(picture._image);
    pictureService->show();
}

