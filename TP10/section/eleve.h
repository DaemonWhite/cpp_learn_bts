#ifndef ELEVE_H
#define ELEVE_H


class eleve
{
private:
    char nom[30];
    float note;
public:

    void SaisieEleve(void);
    void AfficheEleve(void);
    float RecupNote();

    eleve();
};

#endif // ELEVE_H
