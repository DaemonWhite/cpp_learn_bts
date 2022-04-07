#ifndef DEVINEMOT_H
#define DEVINEMOT_H
#include <string>

using namespace std;

class DevineMot
{
private:
    string MotADeviner;
    string MotMelange;
    int aide;

public:
    void MelangerLettres();
    int Comparer( string MotPropose );
    string getMotMelange();
    void setMotADeviner( string Mot );
    bool Assistance();
    DevineMot();
};

#endif // DEVINEMOT_H
