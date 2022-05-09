#ifndef SECTION_H
#define SECTION_H

#include "eleve.h"
#include <vector>

class section
{
private:
    eleve UnEleve;
    vector <eleve> TabEleve;
    fstream flux;
    int nbreEleves;
    float moy;
public:
    section();
    void AjoutEleves();
    void Traitement();
    void AfficherSection();
    void EnregistreSection();
    void LireSection();
    void SuprimeEleve();
};

#endif // SECTION_H
