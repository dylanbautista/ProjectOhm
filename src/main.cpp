#include <iostream>
#include <QApplication>
#include <QMainWindow>

int main(int argc , char* argv[]) {
    QApplication app(argc, argv);
    QMainWindow mainWindow;
    mainWindow.setWindowTitle("Ohm");
    mainWindow.resize(1280, 800);
    mainWindow.show();
    return app.exec();
}