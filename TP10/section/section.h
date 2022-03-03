#include "eleve.h"
#ifndef SECTION_H
#define SECTION_H

class Section
{
private:
    eleve *TabEleve;
    int nbreEleves;
    float moy;

public:
    Section();
    ~Section();

    void AddEelve(void);
    void SaisieSection(int add =0);
    void Traitrement(void);
    void AfficheSection(void);
};

#endif // SECTION_H
