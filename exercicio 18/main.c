#include <stdio.h>
#include <stdlib.h>

//18.Entrar com números enquanto forem positivos e imprimir quantos foram digitados.

int main()
{
    int n=0;
    int i=0;

    while (n>=0)
    {
        printf("digite um numero: ");
        scanf("%d", &n);
        i++;
    }
        printf("\nTotal numeros digitados: %d\n",i-1);
}
