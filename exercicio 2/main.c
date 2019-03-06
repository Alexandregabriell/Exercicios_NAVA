#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//2.Faça um programa que imprima os números pares do intervalo de 1 a 10.

int main()
{

    int i;

        for(i=1; i<10; i++)
        {
            if (i%2==0)
                printf("%d\n", i);
        }
}
