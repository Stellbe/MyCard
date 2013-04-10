#ifndef TECHNIQUE_H
#define TECHNIQUE_H

#include <QObject>

#include <vector>
#include <string>

class technique : public QObject
{
public:
    technique();

    int getPrix() { return m_prix; }

    void setPrix(int prix) { m_prix = prix; }

private:
    //condition, cible, effet (les trois parametres pour le tableau informations
    std::vector<std::string> informations;
    int m_prix;
};

#endif // TECHNIQUE_H
