#ifndef CLISTEELEVE_H
#define CLISTEELEVE_H

#include <vector>

using namespace std;

typedef struct
{
    char Nom[30];
    float Note;
}eleve;

class ClisteEleve
{
private:
    vector<eleve> ListeEleve;
    int nbreEleve;
    float moyenne;
 public:
    ClisteEleve();
    void SaiSieNote();
    void Traitement();
    void EcritureFichier();
};

#endif // CLISTEELEVE_H
