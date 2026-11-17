#include <iostream>
#include "Application.h"
#include <QApplication>
#include <QMainWindow>
#include <QPushButton>

int main(int argc, char* argv[]) {
    Application app(argc, argv);

    return app.run();
}