#include "game.h"

Game::Game(QObject *parent) :
    QObject(parent)
{
    _playerList[0] = new Player("Connard");
    _playerList[1] = new Player("Troudbal");
}
