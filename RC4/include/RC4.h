#ifndef RC4_H
#define RC4_H
#include <vector>

class RC4
{
    public:
        RC4(unsigned int tailleCle = 0);
        RC4(unsigned char *cle,unsigned int tailleCle);
        RC4(std::vector<unsigned char> cle);

        unsigned char chiffrage(unsigned char octet);
        std::vector<unsigned char> getCle();

        unsigned int getTailleCle();
        void initCodageDecodage();

    private:

        unsigned int i;
        unsigned int j;

        std::vector<unsigned char> maCle;
        std::vector<unsigned char> tableauEtat;
        unsigned int tailleCle;
        const unsigned int tailleTableauEtat;

        void genereCle();
        void melangeTableauEtat();
        void swap (unsigned char *val1, unsigned char *val2);
};

#endif // RC4_H
