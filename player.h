#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

class Player : public QObject
{
public:
    Player();

    string getNom() { return m_nom; }

    void setNom(nom) { m_nom = nom; }

private:
    string m_nom;
};

#endif // PLAYER_H
