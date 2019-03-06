#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//10.Sabendo que a conversão de Fahrenheit para Celsius é 𝐶=5×(𝐹−32)9,
//faça um programa que pergunte o limite superior e o inferior e imprima uma tabela de conversão dentro deste limite.

int main()
{
    int n1, n2, i;
    float graus;

        printf("digite um numero minimo e maximo em FAHRENHEIT para ser convertido em CELSIUS: \n");
            scanf("%d%d", &n1,&n2);
    for(i=n1; i<=n2; i++){
        graus = (i-32)/1.8000;
        printf("%d CELSIUS\t =\t %.2f FAHRENHEIT \n",i, graus);
    }
}
