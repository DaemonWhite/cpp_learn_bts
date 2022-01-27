#include <iostream>

using namespace std;

int main()
{
    int *Tab;
    int Nbre;
    cout << "Donnez le nombvre d'élément du tablaux : ";
    cin >> Nbre;

    Tab=new int[Nbre];

    for(int i=0; i<Nbre; i++)
    {
        Tab[i]=10;
    }

    for(int i=0; i<Nbre; i++)
    {
        cout << i+1 << "\t" << Tab[i]<<"\n";
    }

    return 0;
}
