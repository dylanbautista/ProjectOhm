#pragma once 
#include <QApplication>

class MainWindow;

class Application {
public:
    Application(int argc, char* argv[]);
    int run();

private:
    QApplication qtApplication;
    
    //std::unique_ptr<MainWindow> mainWindow;
    MainWindow *mainWindow;
};