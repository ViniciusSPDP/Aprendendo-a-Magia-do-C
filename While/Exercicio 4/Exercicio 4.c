#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main()
{
    setlocale(LC_ALL, "");
    int i;

    while(i<=10)
    {
        printf("%d\n", i);

        i = i+2;
    }

}
