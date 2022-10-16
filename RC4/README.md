# RC4

## Dependance du Projet
[gestionrandom](../gestionrandom)

## Utilisation

### Constructeur
```cpp

//Sans clée au préalale
objet RC4(unsigned int tailleClee);

//Avec la clée en tableau simple
objet RC4(unsigned char *cle,unsigned int tailleTableau);

//Avec clée en vecteur
objet RC4(std::vector<unsigned char> cle);


```

### Chifrement et Dechiffrement
```cpp
unsigned char octet; // un char corespond à un octet exploitable
unsigned char chiffrer;
insigned char dechiffrer;
chiffrer = objet.chiffrage(octet);
```
La donner est chiffrer pour la dechiffrer avec le même objet penssez à réinitialisé

```cpp
objet.initCodageDecodage();
```

Après on pourras à nouveau déchiffrer

```cpp
dechiffrer = objet.chiffrage(chiffrer);
```

### Recuperation de la clée et sa taille

```cpp
std::vector<unsigned char> clef == objet.getCle(); //clée
unsigned int tailleCle = objet.getTailleCle();
```
