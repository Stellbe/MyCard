#ifndef CARD_H
#define CARD_H

#include <QObject>

class Card : public QObject
{
public:
    Card();

    string m_nom;
    string m_type;
    string m_symbole;
};

#endif // CARD_H
