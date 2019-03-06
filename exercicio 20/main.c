#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//20.Crie um programa a onde 10 números serão digitados e a raiz quadrada deles será impressa.
//Cri eum mecanismo que não permita a digitação de números negativos.

int main()
{

    int n[10];
    int i;


    for (i=0; i<10; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &n[i]);
        if (n[i]<0)
        {
            printf("\nINVALIDO - SOMENTE NUMERO POSITIVO\n");
            i--;
        }
    }

    for (i=0; i<10; i++)
        printf("\n\t%d -----> %f\n",n[i], sqrt(n[i]));
}
