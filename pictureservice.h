//
// Created by zgdarya on 4/27/24.
//

#ifndef NONOGRAM_PICTURESERVICE_H
#define NONOGRAM_PICTURESERVICE_H

#include <QWidget>
#include <QDebug>
#include <QTableWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class PictureService; }
QT_END_NAMESPACE

class PictureService : public QWidget {
Q_OBJECT

public:
    explicit PictureService(QWidget *parent = nullptr);

    ~PictureService() override;

    void createNonogram(QImage image);

    QTableWidget nonogram;

private:
    Ui::PictureService *ui;

    int matrix20[20][20];

private slots:
    void on_nonogram_cellClicked(int row, int column);
};


#endif //NONOGRAM_PICTURESERVICE_H
