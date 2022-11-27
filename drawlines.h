#ifndef DRAWLINES_H
#define DRAWLINES_H
#include <QPainter>
#include <QGraphicsItem>
#include <QtCore>
#include <QtGui>



class drawLines : public QGraphicsItem
{
public:
    drawLines();

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);



};

#endif // DRAWLINES_H
