#include "lib/MainWindow.hpp"
#include <QApplication>
#include <iostream>

// ��� � ������ ��� ����
// void printDatasOfDialogWindow(Dialog* window) {
//    std::cout << "Name DB: " << window->getDB().toStdString();
//}

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    MainWindow window;

    window.show();

    return app.exec();
}