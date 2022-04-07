#ifndef IHM_H
#define IHM_H

#include <string>
#include <iostream>
#include "devinemot.h"

using namespace std;

class ihm
{

private:
    string MotPropose;
    DevineMot monJeu;

public:
    void SaisrMotADeviner();
    void PresenterMotMelanger();
    void jouer();
};

#endif // IHM_H
