#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//23.Faça um programa que receba duas strings e verifica se uma está dentro da outra.
//Se sim, retorne o ponteiro para a posição de memória inicial da contida, senão retorne NULL.

int main(int argc, char *argv[])
{

	char nome1[50];
	char nome2[50];
	int cont= 0;
	int i =0;
	int j=0;
	int k =0;
	int t=0;

        printf("digite um nome: ");
            gets(nome1);
        printf("digite outro nome: ");
            gets(nome2);

	while(nome1[i] != '\0')
        {
		if(nome1[i] == nome2[0])
		{
			for(j=0,k=i;j<=strlen(nome2)-1;j++,k++)
			{
				if(nome1[k] == nome2[j])
				{
					cont = cont + 1;
					if (cont == strlen(nome2))
					{
						printf("\n\nCONTEM - ENDERECO: %d",&nome1[k]-cont+1);
						t = t + 1;
						break;
					}
				}
			}

		}
		if (cont == strlen(nome2))
		break;
		cont=0;
		i++;
	}
	if (t==0)
        printf("NULL");
}
