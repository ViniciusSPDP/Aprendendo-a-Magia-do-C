#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int num;

    printf("Digitação uka opcao de 1 a 3");
    scanf("%d", &num);

    switch(num){
    case 1:{
        printf("Voce digitou a opcao 1");
        break;
    }
        case 2:{
        printf("Voce digitou a opcao 2");
        break;
    }
        case 1:{
        printf("Voce digitou a opcao 3");
        break;
    }


    }


}
