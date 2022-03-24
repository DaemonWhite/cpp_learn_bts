#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream readFile;
    int tab[10];

    readFile.open("bin.dat");

    if (readFile)
    {
        readFile.read((char *)tab, sizeof(tab));

        for (int i=0; i<10; i++)
        {
            cout << "Val " << i+1 << " : " << tab[i] << endl;
        }

    } else {
        cout << "error --> fichier introuvable" << endl;
        exit(1);
    }




    return 0;
}
