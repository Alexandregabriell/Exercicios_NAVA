#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*15.Fa�a um programa que recebe uma palavra e imprima conforme o exemplo:
Palavra digitada: TERRA
Impress�o:
A
RA
RRA
ERRA
TERRA*/


int main()
{
char p[20];
char i;
char tamanho;

    printf("digite uma palavra: ");
    gets(p);

    for (i=strlen(p); i>=0; i--)
        printf("%s\n", &p[i]);
}
