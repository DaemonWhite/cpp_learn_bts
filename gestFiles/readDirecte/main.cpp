#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream readText("bashrc.txt");
    char text[11];

    if (readText)
    {
        readText.seekg(-10, ios::end);

        for (int i=0; i < 10; i++)
        {
            text[i] = readText.get();
        }

        cout << text << endl ;

    } else {
        cout << "Erreur --> fichier manquant" << endl;
    }

    return 0;
}
