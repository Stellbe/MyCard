#ifndef TECHNIQUE_H
#define TECHNIQUE_H

#include <QObject>

#include <QVector>
#include <QString>
#include <card.h>

class technique : public Card
{
public:
    technique();

    int getPrix() { return m_prix; }

    void setPrix(int prix) { m_prix = prix; }

private:
    //condition, cible, effet (les trois parametres pour le tableau informations
    QVector<QString> informations;
    int m_prix;
};

#endif // TECHNIQUE_H
