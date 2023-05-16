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

    printf("Qual o seu estado civil (s, c, d ou v): ");
    scanf("%c", &ec);

    switch(ec){
        case 'c':
        case 'C':
            printf("Seu estado civil é casado(a) \n");
            break;

        case 's':
        case 'S':
            printf("Seu estado civil é solteiro(a) \n");
            break;

        case 'd':
        case 'D':
            printf("Seu estado civil é divorciado(a) \n");
            break;

        case 'v':
        case 'V':
            printf("Seu estado civil é viuvo(a) \n");
            break;

        default:
            printf("Opção Invalida !!! \n");



    }



}
