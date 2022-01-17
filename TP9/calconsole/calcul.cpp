#include "calcul.h"

Calcul::Calcul()
{
}

float Calcul::inverse(float nombre)
{
    float result;
    result = 1/nombre;
    return result;

}

int Calcul::quotient(int m, int n)
{
    int result;
    result = m/n;
    return result;
}

int Calcul::reste(int m,int n)
{
    int result;
    result = m % n;
    return result;
}

float Calcul::min(float a, float b, float c, float d)
{
    float max1,max2;
    float result;
    max1=(a<b)?a:b;
    max2=(c<d)?c:d;
    result=(max1<max2)?max1:max2;
    return result;
}

float Calcul::max(float a, float b, float c, float d)
{
    float max1,max2;
    float result;
    max1=(a>b)?a:b;
    max2=(c>d)?c:d;
    result=(max1>max2)?max1:max2;
    return result;
}



