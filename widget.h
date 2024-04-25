#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileDialog>
#include <QPixmap>
#include <QBitmap>
#include <QPainter>
#include <QDebug>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QTableView>
#include <QImage>

#include "Picture.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
private:
    QString _path = nullptr;

    QSize _size = QSize(0, 0);

    int matrix20[20][20];

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void createNonogram(QImage image);

    //void paintEvent(QPaintEvent *, QString path);

private slots:

    //menu
    void on_add_new_nonogram_clicked();

    void on_exit_clicked();

    void on_start_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
