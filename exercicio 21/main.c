#include <stdio.h>
#include <stdlib.h>

//21.Crie um programa aonde o usuário digita n números e seu fatorial é impresso.
//O programa termina quando um número menor que 1 é digitado.

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
