#ifndef PROCESTEXT_H
#define PROCESTEXT_H

#include <QtGui>
#include <QtCore>
#include <QGraphicsItem>
#include <QString>



class ProcesText:public QGraphicsTextItem
{
public:
    ProcesText();

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};

#endif // PROCESTEXT_H
