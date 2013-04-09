#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>

class client : public QObject
{
public:
    client();

private:
    vector<string> caracteristiques(caracteristique);
    string m_effet;
    int m_tourAppel;
    int m_prixAppel;
};

#endif // CLIENT_H
