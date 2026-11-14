#include <iostream>
#include <QApplication>
#include <QMainWindow>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    QMainWindow mainWindow;
    mainWindow.setWindowTitle("Ohm");
    mainWindow.resize(1280, 800);
    mainWindow.setMinimumSize(800, 600);
    mainWindow.setStyleSheet("background-color: #1e1e1e; color: #ffffff; font-family: Arial, sans-serif; font-size: 14px;");
    mainWindow.show();
    return app.exec();
}