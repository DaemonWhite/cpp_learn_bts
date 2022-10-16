# gestionrandom

## Utilisation

### Constructeur
```
//Sans clée au préalale
objet Random(int mini, int maxi, int taille, bool exclusif = false);
```
### Aléatoire Rapide sans class
```
Random::valeurUnique(int mini, int maxi);
```

### Regénérè un tableau
```
objet.remplirTab();
```

### Accesseur 

```
int max		= objet.getMaxi();
int mini	= objet.getMini();
int taille	= getTaille();

std::vector <int> = objet.getTableau();
```


### Mutateur
```
objet.setMaxi(int maxi);
objet.setMini(int mini);
objet.setTaille(int taille);
```

## A retenir
```
static std::mt19937 mt; //système aléatoire
std::mt19937 Random::mt(time(NULL));
std::uniform_int_distribution<int> dis;
```