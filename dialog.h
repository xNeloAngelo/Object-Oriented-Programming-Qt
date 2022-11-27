#ifndef DIALOG_H
#define DIALOG_H


#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QDebug>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QString>
#include <QtCore>
#include <QtGui>
#include <QGraphicsTextItem>



namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_rBtn_SPret_clicked(bool checked);

    void on_cb_procesNumber_currentTextChanged(const QString &arg1);

    void on_btn_draw_pressed();

private:
    Ui::Dialog *ui;

    QGraphicsScene *scene;
    QPainter *painter;
    QGraphicsTextItem *cycle;


};

#endif // DIALOG_H
