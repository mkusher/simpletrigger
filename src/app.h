#ifndef APP_H
#define APP_H

#include <QCoreApplication>
#include <QStringList>

class App : public QCoreApplication {
    Q_OBJECT

    int argc;
    QStringList argv;
public:
    App(int&, char**&);
    
signals:
    
public slots:
    
};

#endif // APP_H
