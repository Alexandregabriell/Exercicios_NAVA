#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//2.Fa�a um programa que imprima os n�meros pares do intervalo de 1 a 10.

int main()
{

    int i;

        for(i=1; i<10; i++)
        {
            if (i%2==0)
                printf("%d\n", i);
        }
}
