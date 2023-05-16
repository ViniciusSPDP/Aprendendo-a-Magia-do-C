#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main()
{
    setlocale(LC_ALL, "");
    int i = 10;

    while(i>=1){
        printf("%d \n", i);
        i--;
    }

}
