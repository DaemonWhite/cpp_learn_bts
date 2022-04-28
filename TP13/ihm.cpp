#include "ihm.h"


void ihm::SaisrMotADeviner()
{
    string demande;

    cout << "Donner le mot a deviner : ";
    cin >> demande;

    monJeu.setMotADeviner(demande);
    monJeu.MelangerLettres();

    system("clear");
}

void ihm::PresenterMotMelanger()
{
    cout << "Mot a retrouver : " << monJeu.getMotMelange() << endl;
}

void ihm::jouer()
{
    int vraix =1;
    int i=1;
    bool end;
    string delande;
    do
    {
        cout << "Retrouver le bon mot : ";
        cin >> delande;
        vraix = monJeu.Comparer(delande);
        if (vraix)
        {
            cout << "Mauvaise réponce" << endl;
            cout << "Essai " << i << endl;
            end = monJeu.Assistance();
            PresenterMotMelanger();
            if (end)
            {
                vraix=0;
                cout << "Bon bas vous avez laisser l'ordi faire" <<endl;
            }
            i++;
        } else {
            cout << "Bonne réponce" << endl;

            cout << "Vous avais mis " << i << " essay" << endl;
        }
    } while (vraix != 0);



}
