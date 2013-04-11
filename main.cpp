#include "mainwindow.h"
#include <QApplication>

#include "game/game.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Game * test = new Game();

    test->_playerList[0]->play();

    return a.exec();
}
