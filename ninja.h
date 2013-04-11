#ifndef NINJA_H
#define NINJA_H

#include <QVector>
#include <QString>

#include <card.h>

class Ninja : public Card
{
public:
    Ninja();

    QString getEffectText() { return m_effectText; }
    int getCombat() { return m_combat; }
    int getRenfort() { return m_renfort; }
    int getTourAppel() { return m_tourAppel; }
    int getPrixAppel() { return m_prixAppel; }
    int getRenfortBlesse() { return m_renfortBlesse; }
    int getCombatBlesse() { return m_combatBlesse; }
    QString getStyle() { return m_style; }

    void setEffectText(QString effect) { m_effectText = effect; }
    void setCombat(int combat) { m_combat = combat; }
    void setRenfort(int renfort) { m_renfort = renfort; }
    void setTourAppel(int tour) { m_tourAppel = tour; }
    void setPrixAppel(int prix) { m_prixAppel = prix; }
    void setRenfortBlesse(int renfort) { m_renfortBlesse = renfort; }
    void setCombatBlesse(int combat) { m_combatBlesse = combat; }
    void setStyle(QString style) { m_style = style; }

private:
    QVector<QString> caracteristiques();
    QString m_effectText;
    int m_combat;
    int m_renfort;
    int m_tourAppel;
    int m_prixAppel;
    int m_renfortBlesse;
    int m_combatBlesse;
    QString m_style;
};

#endif // NINJA_H
