#include <stdio.h>
#include <stdlib.h>

//22.Faça um programa que verifica se um número digitado é primo.

int main()
{
    int n=0;
    int i=0;
    int cont=0;

    printf("digite um numero: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {
        if((n%i)==0)
            cont++;
    }
    if(cont>2)
        printf("%d nao eh primo\n",n);
    else
        printf("%d eh primo\n",n);
}
