#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

class Player : public QObject
{
public:
    Player();

private:
    string m_nom;
};

#endif // PLAYER_H
