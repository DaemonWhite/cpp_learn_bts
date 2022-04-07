#include "devinemot.h"
#include <iostream>

DevineMot::DevineMot()
{
    aide=1;
    MotMelange="";
}

bool DevineMot::Assistance()
{
    string mot = MotADeviner;
    string t;
    int alea;
    bool ret=false;
    srand(time(0));
    MotMelange ="";

    for(int i=0; i < aide; i++)
    {
        MotMelange += mot[0];
        mot.erase(0,1);
    }

    cout << "next " << MotMelange << endl;

    if (MotMelange != MotADeviner)
    {
        alea = rand() % mot.size();
        MotMelange += mot[alea];
        mot.erase(alea, 1);
        ret=false;
    } else {
        ret=true;
    }

    return ret;
}

void DevineMot::MelangerLettres()
{
    string mot = MotADeviner;
    int alea;
    srand(time(0));

    do {
        alea = rand() % mot.size();
        MotMelange += mot[alea];
        mot.erase(alea, 1);
    } while (mot.size() != 0);
}

string DevineMot::getMotMelange()
{
    return MotMelange;
}

void DevineMot::setMotADeviner(string Mot)
{
    MotADeviner = Mot;
}

int DevineMot::Comparer(string MotPropose)
{
    int ret=1;

    if (MotPropose == MotADeviner)
    {
        ret=0;
    }

    return ret;
}
