#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv); 

    QPushButton *button1 = new QPushButton("quit");
    QPushButton *button2 = new QPushButton("quit");

    QObject::connect(button1, SIGNAL(clicked()), &app, SLOT(quit()));
    QObject::connect(button2, SIGNAL(clicked()), &app, SLOT(quit()));

    button1->show();
    button2->show();
    

    return app.exec();
}
