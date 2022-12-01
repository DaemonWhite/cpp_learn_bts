#ifndef PRECIPITATION_H
#define PRECIPITATION_H
#include <vector>
#include <string>
#include <array>
#include "DoneeMois.h"


class Precipitation
{
    public:
        Precipitation();
        virtual ~Precipitation();
        static const std::array <std::string,12> listeMois;

        bool setPrecipitationMois(DoneeMois mesDonnee);
        float getPrecipitationMois(std::string mois);
        void setVille(std::string nom);
        std::string getVille();
        DoneeMois getMaxi();
        float getCumul();
        float getMoyenne();
        std::vector <DoneeMois> getTrie();
        std::vector <DoneeMois> getNomTrie();
        int rechercheIndiceMois(std::string mois);

    private:
        std::vector <DoneeMois> lesPrecipitationsNonTrie;
        std::vector <DoneeMois> lesPrecipitationsTrie;
        std::string ville;
        void tri();
};

#endif // PRECIPITATION_H
