#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//20.Crie um programa a onde 10 n�meros ser�o digitados e a raiz quadrada deles ser� impressa.
//Cri eum mecanismo que n�o permita a digita��o de n�meros negativos.

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
