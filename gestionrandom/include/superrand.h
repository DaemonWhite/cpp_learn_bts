#ifndef SUPERRAND_H
#define SUPERRAND_H
#include <iostream>
#include <vector>

class superrand
{
    private:
        bool exclusif;
        int maxi;
        int mini;
        int tabRandom;
        int taille;

        int calculValeur();
        void inversionMaxMini();

    public:
        superrand(int mini, int maxi, int taille, bool exclusif = false);

        int getMaxi() const;
        int getMini() const;
        int getTaille() const;

        void setMaxi(int maxi);
        void setMini(int mini);
        void setTaille(int taille);

        std::vector <int> getTableau();
        int operator[] (int indice) const;
        void remplirTab();
        ~superrand();

    protected:
};

#endif // SUPERRAND_H
