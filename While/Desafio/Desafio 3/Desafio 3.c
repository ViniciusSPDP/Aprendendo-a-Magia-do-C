#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    int i = 1, i2 = 1, r1;

    while(i2<=5)
    {
        printf("Tabuada do %d \n", i2);
        while(i<=10)
        {
            r1 = i2*i;

            printf("%d * %d = %d \n", i2,i,r1);
            i++;
        }
        printf("\n");
        i=0;
        i2++;
    }




}
