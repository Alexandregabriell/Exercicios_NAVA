#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//9.Sabendo que uma polegada tem 2.54cm, imprima uma tabela de conversão de polegadas para centímetros
//para os valores de 1 a 20 polegadas.

int main()
{
    int n1, n2, i;
    float p;

    for(i=1; i<=20; i++)
    {
        p = i*2.54;
        printf("%d CENTIMETRO\t =\t %.2f POLEGADA \n",i, p);
    }
}
