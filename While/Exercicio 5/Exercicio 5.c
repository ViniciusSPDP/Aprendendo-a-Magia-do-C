#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main()
{
    setlocale(LC_ALL, "");
    int i=1;

    while(i<=10)
    {
        printf("%d\n", i);

        i = i+2;
    }

}
