#include <stdio.h>
#include <stdlib.h>



//3.Fa�a um programa que imprima os 100 primeiros pares.

int main()
{
    int i;

    for(i=1; i<=100; i++)
    {
        if(i%2==0)
        printf("%d\n", i);
    }

}
