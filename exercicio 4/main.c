#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//4.Imprima os múltiplos de 5 do intervalo entre 1 e 500
int main()
{
    int i;

    for(i=1; i<=500; i++)
    {
        if(i%5==0)
        printf("%d\n", i);
    }
}
