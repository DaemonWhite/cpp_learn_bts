#ifndef ELEVE_H
#define ELEVE_H

#include <string>
#include <fstream>

using namespace std;

class eleve
{
private:
    string nom;
    float note;

public:
    void SaisieEleve();
    void AfficheEleve();
    float getNote();
    void EnregistrerEleve(fstream & flux);
    void LireEleve(fstream & flux);
    eleve();
};

#endif // ELEVE_H
