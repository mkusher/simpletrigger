#include <QStringList>
#include "app.h"

App::App(int& argc, char**& argv) : QCoreApplication(argc, argv)
{
    this->argc=argc;
    for(int i=0; i< argc; ++i)
        this->argv << argv[i];
}
