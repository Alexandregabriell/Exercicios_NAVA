#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1.Crie um programa que leia 5 números e imprima o quadrado deles.

int main(void)

{
    int v[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("digite um numero: ");
            scanf("%d", &v[i]);
    }
    for(i=0; i<5; i++)
        printf("O quadrado dos numeros digitados foi: %d = %d\n",v[i], v[i]*v[i]);
}

