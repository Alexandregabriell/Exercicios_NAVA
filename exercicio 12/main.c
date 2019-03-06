#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//12.Crie um programa que leia a quantidade de números que serão digitados
//para que se possa imprimir qual é o maior e o menor deles.

int main(void)
{
    int i=0;
    int n;
    int maior=0;
    int menor=n;

    printf("digite os numeros e 0 para sair: ");
    scanf("%d", &n);

    do
    {
        if (n>maior)
            maior = n;

        if(n<menor)
            menor = n;

        printf("digite os numeros: ");
        scanf("%d", &n);
        i++;
    }
    while(n=0);

        printf("\nMENOR: %d\nMAIOR: %d\nQUANTIDADE DIGITADA: %d\n",menor,maior,i);
}
