#ifndef FICHIERCRYPTE_H
#define FICHIERCRYPTE_H
#include <string>
#include <fstream>
class FichierCrypte
{
    private:
        bool cryptage;
        std::ofstream fichierDestination;
        std::ifstream fichierSource;
        std::string nomDestination;
        std::string nomSource;

        bool controleExtentionFichier(std::string extension);
        void nomFichierDestination(std::string extension);

    public:
        bool crypteFichier();
        void decrypteFichier();
        FichierCrypte (std::string source, bool cryptage=true, std::string extension="");

        std::string getNomDestination();
        std::string getNomSource();

        ~FichierCrypte();
};

#endif // FICHIERCRYPTE_H
