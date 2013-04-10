#ifndef TECHNIQUE_H
#define TECHNIQUE_H

#include <QObject>

class technique : public QObject
{
public:
    technique();

    std::vector<string> getInformations() { return informations; }
    int getPrix() { return m_prix; }

    void setInformations(std::vector vec) { informations = vec; }
    void setPrix(prix) { m_prix = prix; }

private:
    //condition, cible, effet (les trois parametres pour le tableau informations
    std::vector<string> informations = new std::vector<string>(3);
    int m_prix;
};

#endif // TECHNIQUE_H
