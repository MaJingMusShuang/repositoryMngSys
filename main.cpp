#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //make some changes in main
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
