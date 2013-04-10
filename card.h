#ifndef CARD_H
#define CARD_H

#include <QObject>

using namespace std;

class Card : public QObject
{
public:
    Card();

    string getNom() { return m_nom; }
    string getType() { return m_type; }
    string getSymbole() { return m_symbole; }

    void setNom(string nom) { m_nom = nom; }
    void setType(string type) { m_type = type; }
    void setSymbole(string symbole) { m_symbole = symbole; }

private:
    string m_nom;
    string m_type;
    string m_symbole;
};

#endif // CARD_H
