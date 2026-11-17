#include "Application.h"
#include "../presentation/MainWindow.h"

Application::Application(int argc, char* argv[])
    : qtApplication(argc, argv),
    mainWindow(nullptr) {
    qtApplication.setApplicationName("Nexilicion");
    qtApplication.setApplicationVersion("0.1.0");
    qtApplication.setOrganizationName("Nexilicon");

    //mainWindow = std::make_unique<MainWindow>();
    mainWindow = new MainWindow();
}

int Application::run(){
    mainWindow->show();
    return qtApplication.exec();
}


