# gestionrandom

## Utilisation

### Constructeur
```cpp
//Sans clée au préalale
objet Random(int mini, int maxi, int taille, bool exclusif = false);
```
### Aléatoire Rapide sans class
```cpp
Random::valeurUnique(int mini, int maxi);
```

### Regénérè un tableau
```cpp
objet.remplirTab();
```

### Accesseur 

```cpp
int max		= objet.getMaxi();
int mini	= objet.getMini();
int taille	= getTaille();

std::vector <int> = objet.getTableau();
```


### Mutateur
```cpp
objet.setMaxi(int maxi);
objet.setMini(int mini);
objet.setTaille(int taille);
```

## A retenir
```cpp
static std::mt19937 mt; //système aléatoire
std::mt19937 Random::mt(time(NULL)); // itialiste le statique
std::uniform_int_distribution<int> dis(mini, max); // itialise la plage d'apparition pour que les éléments soives équitable
dis(mt) // Passe le systéme aléatoire
```
