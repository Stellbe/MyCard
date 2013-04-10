#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>

class client : public QObject
{
public:
    client();

    std::vector<string> getCaracteristiques() { return caracteristiques(); }
    string getEffet() { return m_effet; }
    int getTourAppel() { return m_tourAppel; }
    int getPrixAppel() { return m_prixAppel; }

    void setCaracteristiques(std::vector vec) { caracteristiques = vec; }
    void setEffet(effet) { m_effet = effet; }
    void setTourAppel(tour) { m_tourAppel = tour; }
    void setPrixAppel(prix) { m_prixAppel = prix; }

private:
    std::vector<string> caracteristiques();
    string m_effet;
    int m_tourAppel;
    int m_prixAppel;
};

#endif // CLIENT_H
