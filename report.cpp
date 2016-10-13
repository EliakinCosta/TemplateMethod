#include "report.h"

#include <QString>
#include <QDebug>

Report::Report()
{

}

void Report::report(QString name)
{
    qDebug() << "-----Cabecalho-----";
    qDebug() << "Relatorio - " << name;
    qDebug() << "\n";
    this->bodyReport();
    qDebug() << "\n";
    qDebug() << "-----Rodape-----";
    qDebug() << "\n";
}

