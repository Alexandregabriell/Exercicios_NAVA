#include <stdio.h>
#include <stdlib.h>

//21.Crie um programa aonde o usu�rio digita n n�meros e seu fatorial � impresso.
//O programa termina quando um n�mero menor que 1 � digitado.

int main()
{
    int n;
    int i;
    int fat;

    printf("digite um numero: ");
    scanf("%d", &n);

    for(i= n-1,fat=n ; i>0; i--)
    {
        fat = fat * i;
        printf("%d x %d = %d\n", n,i,fat);
    }
}
