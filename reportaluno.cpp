#include "reportaluno.h"

#include <QDebug>

ReportAluno::ReportAluno()
{

}

void ReportAluno::bodyReport() const
{
    qDebug() << "-----Corpo-----";
    qDebug() << "Aluno";
    qDebug() << "---------------";
}

