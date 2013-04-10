#ifndef TACTIQUE_H
#define TACTIQUE_H

#include <QObject>

class tactique : public QObject
{
public:
    tactique();

        string getEffectText() { return m_effectText; }
        int getPuissanceTactique() { return m_puissanceTactique; }
        int getPrixAppel() { return m_prixAppel; }

        void setEffectText(effect) { m_effectText = effect; }
        void setPuissanceTactique(puissance) { m_puissanceTactique = puissance; }
        void setPrixAppel(prix) { m_prixAppel = prix; }

private:
    string m_effectText;
    int m_puissanceTactique;
    int m_prixAppel;
};

#endif // TACTIQUE_H
