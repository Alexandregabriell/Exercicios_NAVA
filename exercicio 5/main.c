#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 //5.Fa�a um programa que imprima os n�meros de 1 a 100 e a soma deles.
int main()
{
    int i;
    int soma=0;

    for(i=1; i<=100; i++)
    {
        printf("%d\n", i);
        soma = soma + i;
    }
        printf("\nsoma: %d\n", soma);
}
