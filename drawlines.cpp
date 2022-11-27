#include "drawlines.h"

drawLines::drawLines()
{

}

void drawLines::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen blackPen(Qt::black);
    QString Process = "Process";
    painter->drawText(690,380,Process);

}

