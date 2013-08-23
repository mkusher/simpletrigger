#ifndef APP_H
#define APP_H

#include <QCoreApplication>

class App : public QCoreApplication {
    Q_OBJECT

    int argc;
    char** argv;
public:
    App(int&, char**&);
    
signals:
    
public slots:
    
};

#endif // APP_H
