#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//13.Entrar com 20 n�meros e imprimir a soma dos n�meros que os quadrados s�o menores que 225.

int main()
{
    int i=0;
    int n [20];
    int q=0;

    for (i=0; i<20; i++)
    {
        printf("digite um numero: ");
            scanf("%d", &n[i]);
    }

    for(i=0;i<20;i++){
         q = n[i] * n[i];
        if (q<225)
            printf("\t%d ----> %d\n",n[i],q);
    }
}
