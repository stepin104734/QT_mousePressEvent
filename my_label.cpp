#include "my_label.h"

My_Label::My_Label()
{

}

void My_Label::mousePressEvent(QMouseEvent *ev)
{
    qDebug()<<"mouse clicked";
    emit send(this->text());
}

