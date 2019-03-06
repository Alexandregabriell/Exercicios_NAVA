#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//11.Faça um programa que leia 5 números e imprima o maior deles.

int main()
{
    int i;
    int n;
    int maior=0;
    int menor=0;

    for(i=0; i<5; i++)
    {
        printf("digite os numeros: ");
            scanf("%d", &n);
        if (n>maior){
            maior = n;
        }
        else if(n<menor){
            menor = n;
            }
    }
        printf("\nnumero maior foi: %d\n",maior);
}
