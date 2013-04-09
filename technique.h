#ifndef TECHNIQUE_H
#define TECHNIQUE_H

#include <QObject>

class technique : public QObject
{
public:
    technique();

private:
    vector<string> informations(condition, cible, effet);
    int m_prix;
};

#endif // TECHNIQUE_H
