#include <QCoreApplication>
#include <QLocalServer>
#include <QSqlQuery>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QLocalServer ls;
    QSqlQuery query;
    std::cout << "Hello!!!" << std::endl;
    return a.exec();
}
