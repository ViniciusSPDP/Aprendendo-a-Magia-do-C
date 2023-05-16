#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    setlocale(LC_ALL, "");
    int idade, n, r1;

    printf("Informe sua idade ");
    scanf("%d", &idade);

    printf("Possui habilitação ? \n");
    printf("0 - não possui \n");
    printf("1 - possui \n");
    printf("Informe sua situação (0 ou 1) ");
    scanf("%d", &n);

    r1 = idade>17 && n==1;

    switch(r1){
    case 1:
        printf("Você pode dirigir");
        break;
    default:
        printf("Você não pode dirigir");
        break;
    }

}
