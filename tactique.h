#ifndef TACTIQUE_H
#define TACTIQUE_H

#include <QObject>
#include <QString>
#include <card.h>

class tactique : public Card
{
public:
    tactique();

    QString getEffectText() { return m_effectText; }
    int getPuissanceTactique() { return m_puissanceTactique; }
    int getPrixAppel() { return m_prixAppel; }

    void setEffectText(QString effect) { m_effectText = effect; }
    void setPuissanceTactique(int puissance) { m_puissanceTactique = puissance; }
    void setPrixAppel(int prix) { m_prixAppel = prix; }

private:
    QString m_effectText;
    int m_puissanceTactique;
    int m_prixAppel;
};

#endif // TACTIQUE_H
