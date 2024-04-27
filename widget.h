#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileDialog>
#include <QPixmap>
#include <QPainter>
#include <QDebug>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QTableView>
#include <QImage>
#include <QRect>
#include "Picture.h"
#include "pictureservice.h"


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

    void paintEvent(QPaintEvent *event);

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

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
