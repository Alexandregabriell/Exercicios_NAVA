#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//24.Faça uma função que receba uma stringe um caractere
//e retorne um ponteiro para a primeira ocorrência do caractere na stringou NULL se não encontrar.

*strpos(char x,char *palavra)
{

	char *ptr1 = palavra;

	while(*ptr1 != x){
        ptr1++;
	}
	return ptr1;
}

int main(int argc, char *argv[])
{
	char letra;
	char palavra[50];

	printf("Digite uma String ");
	gets(palavra);

	printf("Digite uma letra: ");
	scanf("%c",&letra);

	printf(" %c %d\n",palavra[0],&palavra[0]);
	printf(" %c %d\n",palavra[1],&palavra[1]);
	printf(" %c %d\n",palavra[2],&palavra[2]);
	printf(" %c %d\n",palavra[3],&palavra[3]);
	printf(" %c %d\n",palavra[4],&palavra[4]);
	printf(" %c %d\n",palavra[5],&palavra[5]);

	printf("\n\n A letra: (%c) esta na posicao: %d -- CONFORME ESQUEMA ACIMA",letra,strpos(letra,palavra));
}
