#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>

#include <QVector>
#include <QString>
#include <card.h>

class client : public Card
{
public:
    client();

    QString getEffet() { return m_effet; }
    int getTourAppel() { return m_tourAppel; }
    int getPrixAppel() { return m_prixAppel; }

    void setEffet(QString effet) { m_effet = effet; }
    void setTourAppel(int tour) { m_tourAppel = tour; }
    void setPrixAppel(int prix) { m_prixAppel = prix; }

private:
    QVector<QString> caracteristiques();
    QString m_effet;
    int m_tourAppel;
    int m_prixAppel;
};

#endif // CLIENT_H
