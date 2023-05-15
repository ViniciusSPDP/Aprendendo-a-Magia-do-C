#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float n1, n2, n3, n4, r1;
    setlocale(LC_ALL, "");

    printf("Digite seu peso ");
    scanf("%f", &n1);

    printf("Digite sua altura ");
    scanf("%f", &n2);

    r1 = n1/(pow(n2,2));

    printf("O seu imc é igual %.2f \n", r1);
    system("pause");

}
