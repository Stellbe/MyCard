#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

class Player : public QObject
{
public:
    Player(QString name);

    QString getNom() { return m_nom; }

    void setNom(QString nom) { m_nom = nom; }

    void play();

private:
    QString m_nom;
};

#endif // PLAYER_H
