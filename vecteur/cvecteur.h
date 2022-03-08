#ifndef CVECTEUR_H
#define CVECTEUR_H


class Cvecteur
{
private:
    int nbreElem;
    float *adr;
public:
    void affiche();

    Cvecteur(int val, int init = 0);
    ~Cvecteur();
};

#endif // CVECTEUR_H
