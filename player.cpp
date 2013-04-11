#include "player.h"

#include <QDebug>

Player::Player(QString name)
{
    qDebug() << "New Player Created";
    m_nom = name;
}

void Player::play()
{
    qDebug() << "Player use a card";
}
