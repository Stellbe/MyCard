#ifndef CARD_H
#define CARD_H

#include <QObject>

class Card : public QObject
{
public:
    Card();

    QString getNom() { return m_nom; }
    QString getType() { return m_type; }
    QString getSymbole() { return m_symbole; }

    void setNom(QString nom) { m_nom = nom; }
    void setType(QString type) { m_type = type; }
    void setSymbole(QString symbole) { m_symbole = symbole; }

private:
    QString m_nom;
    QString m_type;
    QString m_symbole;
};

#endif // CARD_H
