#include "ihm.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{

    string tmp;
    cout <<"Valeur de argc: " <<argc<<endl;
    int iz=0;

    for (int i=1; i < argc; i++)
    {
        tmp = argv[i];

        if (tmp == "nb" )
        {
            i++;
            iz = stoi(argv[i]);
            cout << "test : " << iz << endl;
        } else {
            cout << "Valeur inconue : " << argv[i] << endl;
        }



    }

    ihm interface;
    interface.lancer(iz);
    return 0;
}
