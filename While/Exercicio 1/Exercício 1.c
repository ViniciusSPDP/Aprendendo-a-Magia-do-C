#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main()
{
    setlocale(LC_ALL, "");
    int i=1;
    int n =1;
    int rs;

    while(i<=10)
    {
        rs = i*2;
        printf("O dobro do número %d = %d\n", i, rs);
        i++;
    }

}
