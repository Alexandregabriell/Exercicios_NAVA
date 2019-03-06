#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//16.Entre com uma frase e faça a criptografia dela conforme a seguinte regra: A → X, E→ Y, I→ W,   O → K e U→ Z

int main()
{
    char frase[100];
    int i;

        printf("digite uma frase: ");
            gets(frase);

        for(i=0;i<strlen(frase);i++)
        {
        if (frase[i]== 'a' || frase[i]=='A')
            frase[i]='x';

        if (frase[i]== 'e' || frase[i]=='E')
            frase[i]='y';

        if (frase[i]== 'i' || frase[i]=='I')
            frase[i]='w';

        if (frase[i]== 'o' || frase[i]=='O')
            frase[i]='k';

        if (frase[i]== 'u' || frase[i]=='U')
            frase[i]='z';
        }
            printf("\nNome CRIPTOGRAFADO: %s\n",frase);
}
