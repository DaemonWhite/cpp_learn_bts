#include "ihm.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //ihm interface;
    //interface.lancer();

    cout <<"Valeur de argc: " <<argc<<endl;

    int iz;

    for (int i=1; i < argc; i++)
    {
        iz = (int) argv[i];
        cout << "test : " << argv[i] << endl;
    }
    return 0;
}
