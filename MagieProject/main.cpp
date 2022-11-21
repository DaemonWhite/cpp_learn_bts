#include <iostream>
#include "PapierMagie.h"

int main()
{
    #ifdef WIN32
        system("CHCP 65001 > nul");
    #elif __linux__
        std::cout << "moise";
    #endif // WIN32

    PapierMagie lePapier;
    std::cout << lePapier() << std::endl;
    lePapier.setAge(22);
    lePapier.setArgent(56);
    std::cout << lePapier() << std::endl;




    #ifdef WIN32
        system("CHCP 850 > nul");
    #elif __linux__
        std::cout << "moise";
    #endif // WIN32


    return 0;
}
