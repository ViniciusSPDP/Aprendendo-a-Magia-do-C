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

    printf("Possui habilita��o ? \n");
    printf("0 - n�o possui \n");
    printf("1 - possui \n");
    printf("Informe sua situa��o (0 ou 1) ");
    scanf("%d", &n);

    r1 = idade>17 && n==1;

    switch(r1){
    case 1:
        printf("Voc� pode dirigir");
        break;
    default:
        printf("Voc� n�o pode dirigir");
        break;
    }

}
