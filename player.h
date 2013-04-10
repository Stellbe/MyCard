#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

using namespace std;

class Player : public QObject
{
public:
    Player();

    string getNom() { return m_nom; }

    void setNom(string nom) { m_nom = nom; }

private:
    string m_nom;
};

#endif // PLAYER_H
