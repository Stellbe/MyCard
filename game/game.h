#ifndef GAME_H
#define GAME_H

#include <QObject>

#include "player.h"
#include "card.h"
#include <QVector>

class Game : public QObject
{
    Q_OBJECT
public:
    explicit Game(QObject *parent = 0);
    Player * _playerList [2];
private:

    QVector<Card> _deck;

signals:
    
public slots:
    
};

#endif // GAME_H
