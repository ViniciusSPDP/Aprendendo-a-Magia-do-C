#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    int i = 1, i2 = 1, r1;

    do
    {
        printf("Tabuada do %d \n", i2);
        do
        {
            r1 = i2*i;

            printf("%d * %d = %d \n", i2,i,r1);
            i++;
        }
        while(i<=10);

        printf("\n");
        i=0;
        i2++;
    }
    while(i2<=5);




}
