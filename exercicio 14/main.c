#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//14.Entrar com um nome e imprimir quantas vezes forem o números de seus caracteres.

int main()
{
    char p [20];
    int tamanho=0;

    printf("digite um nome: ");
        gets(p);
        tamanho = strlen(p);
    printf("Nome: %s  Tamanho do nome: %d\n", p, tamanho);
}
