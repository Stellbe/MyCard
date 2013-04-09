#ifndef TACTIQUE_H
#define TACTIQUE_H

#include <QObject>

class tactique : public QObject
{
public:
    tactique();

private:
    string m_effectText;
    int m_puissanceTactique;
    int m_prixAppel;
};

#endif // TACTIQUE_H
