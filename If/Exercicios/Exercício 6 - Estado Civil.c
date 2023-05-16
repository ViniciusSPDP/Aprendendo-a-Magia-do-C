#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    setlocale(LC_ALL, "");

    char ec;

    printf("Estado Civil \n");
    printf("s - Solteiro \n");
    printf("c - Casado \n");
    printf("d - Divorciado \n");
    printf("v - Viuvo \n");

    printf("Escolha a opчуo (s, c, d ou v): ");
    scanf("%c", &ec);

    if(ec == 's'|| ec == 'S'){
        printf("Seu estado civil é solteiro(a)");

    }else if(ec == 'c'|| ec == 'C'){
        printf("Seu estado civil é casado(a)");

    }else if(ec == 'd'|| ec == 'D'){
        printf("Seu estado civil щ divorciado(a)");

    }else if(ec == 'v'|| ec == 'V'){
        printf("Seu estado civil щ viuvo(a)");
    }else{
        printf("Opчуo Invalida");
    }




}
