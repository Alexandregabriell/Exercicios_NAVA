#include <stdio.h>
#include <stdlib.h>

//19.Ler N números e imprimir quantos foram entre 100 e 200.Quando o número zero for digitado o programa para.

int main(void)

{
    int n;
    int i=0;

    while (n!=0)
    {
        printf("digite os numero desejados e 0 para sair: ");
        scanf("%d", &n);

    if (n>100 && n<200)
    i++;
    }
        printf("\nTotal numeros digitados de 100 a 200: %d\n", i);
}
