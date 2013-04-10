#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>

#include <vector>
#include <string>

using namespace std;

class client : public QObject
{
public:
    client();

    string getEffet() { return m_effet; }
    int getTourAppel() { return m_tourAppel; }
    int getPrixAppel() { return m_prixAppel; }

    void setEffet(string effet) { m_effet = effet; }
    void setTourAppel(int tour) { m_tourAppel = tour; }
    void setPrixAppel(int prix) { m_prixAppel = prix; }

private:
    std::vector<string> caracteristiques();
    string m_effet;
    int m_tourAppel;
    int m_prixAppel;
};

#endif // CLIENT_H
