#include <QCoreApplication>

#include "report.h"
#include "reportprofessor.h"
#include "reportaluno.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Report *reportAluno = new ReportAluno;
    reportAluno->report("Eliakin Costa");

    Report *reportProfessor = new ReportProfessor;
    reportProfessor->report("Sandro Andrade");
}

