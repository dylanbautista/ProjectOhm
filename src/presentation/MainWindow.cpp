#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setWindowTitle("Nexilicon");
    resize(1280, 800);
    setMinimumSize(1000, 600);
}

MainWindow::~MainWindow() = default;