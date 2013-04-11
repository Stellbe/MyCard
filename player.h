#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

class Player : public QObject
{
public:
    Player();

    QString getNom() { return m_nom; }

    void setNom(QString nom) { m_nom = nom; }

private:
    QString m_nom;
};

#endif // PLAYER_H
