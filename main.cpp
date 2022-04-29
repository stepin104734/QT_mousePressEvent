
#include "mainwindow.h"

#include <QApplication>
#include <QWidget>
#include "my_label.h"
#include "QLineEdit"
#include "QGridLayout"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *window = new QWidget;
    My_Label *m_label = new My_Label;
    QLineEdit *m_le = new QLineEdit;
    QLineEdit *m_le_2 = new QLineEdit;
    QGridLayout *g_layout = new QGridLayout;
    m_label->setText("label");
    g_layout->addWidget(m_le_2);
    g_layout->addWidget(m_label);
    g_layout->addWidget(m_le);
    window->setLayout(g_layout);
    m_label->setStyleSheet("color:green;background-color:black");
    QObject::connect(m_le_2, SIGNAL(textChanged(QString)), m_label, SLOT(setText(QString)));
    QObject::connect(m_le, SIGNAL(textChanged(QString)), m_label, SLOT(setText(QString)));
    QObject::connect(m_label, SIGNAL(send(QString)), m_le, SLOT(setText(QString)));
    QObject::connect(m_label, SIGNAL(send(QString)), m_le_2, SLOT(setText(QString)));

    window->show();
    return a.exec();
}
