#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    setlocale(LC_ALL, "");
    int idade,n;

    printf("Informe sua idade ");
    scanf("%d", &idade);

    printf("Possui habilita��o ? \n");
    printf("0 - n�o possui \n");
    printf("1 - possui \n");
    printf("Informe sua situa��o (0 ou 1) ");
    scanf("%d", &n);

    if(idade>17 && n==1 ){
        printf("Voc� pode dirigir");
    }else{
        printf("Voc� n�o pode dirigir");
    }



}
