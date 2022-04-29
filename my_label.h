#ifndef MY_LABEL_H
#define MY_LABEL_H
#include "QLabel"
#include "QDebug"


class My_Label : public QLabel
{
    Q_OBJECT
public:
QLabel *m_la = new QLabel;

public:
    My_Label();

signals:
    void send(QString);
public:
    void mousePressEvent(QMouseEvent *ev);
};
#endif // MY_LABEL_H
