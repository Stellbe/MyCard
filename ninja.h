#ifndef NINJA_H
#define NINJA_H

class Ninja
{
public:
    Ninja();

    std::vector<string> getCaracteristiques() { return caracteristiques(); }
    string getEffectText() { return m_effectText; }
    int getCombat() { return m_combat; }
    int getRenfort() { return m_renfort; }
    int getTourAppel() { return m_tourAppel; }
    int getPrixAppel() { return m_prixAppel; }
    int getRenfortBlesse() { return m_renfortBlesse; }
    int getCombatBlesse() { return m_combatBlesse; }
    string getStyle() { return m_style; }

    void setCaracteristiques(std::vector vec) { caracteristiques = vec; }
    void setEffectText(effect) { m_effectText = effect; }
    void setCombat(combat) { m_combat = combat; }
    void setRenfort(renfort) { m_renfort = renfort; }
    void setTourAppel(tour) { m_tourAppel = tour; }
    void setPrixAppel(prix) { m_prixAppel = prix; }
    void setRenfortBlesse(renfort) { m_renfortBlesse = renfort; }
    void setCombatBlesse(combat) { m_combatBlesse = combat; }
    void setStyle(style) { m_style = style; }

private:
    std::vector<string> caracteristiques();
    string m_effectText;
    int m_combat;
    int m_renfort;
    int m_tourAppel;
    int m_prixAppel;
    int m_renfortBlesse;
    int m_combatBlesse;
    string m_style;
};

#endif // NINJA_H
