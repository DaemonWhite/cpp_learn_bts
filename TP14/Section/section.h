#ifndef SECTION_H
#define SECTION_H

#include "eleve.h"
#include <vector>

class section
{
private:
    eleve UnEleve;
    vector <eleve> TabEleve;
    int nbreEleves;
    float moy;
public:
    section();
    void AjoutEleves();
    void Traitement();
    void AfficherSection();
};

#endif // SECTION_H
