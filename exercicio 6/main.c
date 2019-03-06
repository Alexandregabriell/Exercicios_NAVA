#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//6.Faça um programa que entre com 10 números e imprima a metade de cada um.
int main()
{
    float v[10];
    int i;

    for(i=0; i<10; i++)
    {
        printf("digite os numeros: ");
            scanf("%f", &v[i]);
    }
    for(i=0; i<10; i++)
        printf("metade dos numeros digitados foi: %.1f\n", v[i]/2);
}
