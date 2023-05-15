#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float n1, n2, r1;

    printf("Qual valor do produto ? ");
    scanf("%f", &n1);
    printf("Quantas parcelas deseja pagar ?");
    scanf("%f", &n2);

    r1 = n1 / n2;
    printf("%.1f + %.1f = %1f \n", n1, n2, r1);


    system("pause");
}
