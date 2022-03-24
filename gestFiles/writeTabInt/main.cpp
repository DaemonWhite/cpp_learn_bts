#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream writeFile;
    int tab[10];

    cout << "Donner 10 valeurs : " << endl;

    for (int i=0;i < 10;i++)
    {
        cout << "val " << i+1 << " : " ;
        cin >> tab[i];
    }

    writeFile.open("bin.dat");
    writeFile.write( (char *)tab, sizeof(tab));

    return 0;
}
