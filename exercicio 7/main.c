#include <stdio.h>
#include <stdlib.h>

//7.Altere o exerc�cio 6 para imprimir o quadrado de cada n�mero.

int main()
{


    int v[10];
    int i;

    for(i=0; i<10; i++)
    {
        printf("digite os numeros: ");
            scanf("%d", &v[i]);
    }
    for(i=0; i<10; i++)
        printf("metade dos numeros digitados foi: %d\n", v[i]*v[i]);
}
