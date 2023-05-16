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

    printf("Possui habilitação ? \n");
    printf("0 - não possui \n");
    printf("1 - possui \n");
    printf("Informe sua situação (0 ou 1) ");
    scanf("%d", &n);

    if(idade>17 && n==1 ){
        printf("Você pode dirigir");
    }else{
        printf("Você não pode dirigir");
    }



}
