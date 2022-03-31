#include "clisteeleve.h"
#include <fstream>
#include <iostream>

ClisteEleve::ClisteEleve()
{
   nbreEleve=0;
}

void ClisteEleve::SaiSieNote()
{
    ifstream file("eleve.txt");
    eleve tmpEleve;

    if (file)
    {
        do
        {
            file >>tmpEleve.Nom;

            if(file)
            {
                cout << "Entrer la note de " << tmpEleve.Nom << " : ";
                cin >> tmpEleve.Note;
                ListeEleve.push_back(tmpEleve);
                nbreEleve++;
            } else {
                cout << "Liste Vide" << endl;
            }

        }while (file);

    } else {
        cout << "erreur --> fichier non trouvé" << endl;
    }

}

void ClisteEleve::Traitement()
{
    float somme=0;
    for (int i = 0; i < nbreEleve; i++)
    {
        somme += ListeEleve[i].Note;
    }

    moyenne = somme/nbreEleve;
}

void ClisteEleve::EcritureFichier()
{
    ofstream file("result.txt");

    for (int i=0; i < nbreEleve; i++)
    {
        file << ListeEleve[i].Nom << " = " << ListeEleve[i].Note << endl;
    }

    file << "Moyenne : " << moyenne;
}
