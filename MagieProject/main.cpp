#include <iostream>
#include "Spectateur.h"

int main()
{
    #ifdef WIN32
        system("CHCP 65001 > nul");
    #elif __linux__
        std::cout << "moise";
    #endif // WIN32



    #ifdef WIN32
        system("CHCP 850 > nul");
    #elif __linux__
        std::cout << "moise";
    #endif // WIN32


    return 0;
}
