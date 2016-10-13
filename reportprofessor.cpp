#include "reportprofessor.h"

#include <QDebug>

ReportProfessor::ReportProfessor()
{

}

void ReportProfessor::bodyReport() const
{
    qDebug() << "-----Corpo-----";
    qDebug() << "Professor";
    qDebug() << "---------------";
}
