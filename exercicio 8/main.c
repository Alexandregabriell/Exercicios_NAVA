#include <stdio.h>
#include <stdlib.h>

//8.Entrar com 15 números e imprimir a raiz quadrada de dada um deles.

int main()
{
    int i,v[15];

    for(i=0; i<15; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &v[i]);
    }
    for(i=0; i<15; i++)
        printf("numeros: %d----> %f\n",v[i], sqrt(v[i]));
}
