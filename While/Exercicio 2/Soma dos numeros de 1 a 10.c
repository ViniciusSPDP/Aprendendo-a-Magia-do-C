#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main()
{
    setlocale(LC_ALL, "");
    int i=1;
    int rs = 0;

    while(i<=10)
    {
        rs = i+rs;
        i++;

    }
    printf("O resultado da soma de 1 a 10 = %d \n", rs);



}
