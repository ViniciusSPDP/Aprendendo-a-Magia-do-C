#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    setlocale(LC_ALL, "");
    int idade, r1;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    r1 = idade >= 18;

    switch(r1){
    case 1:
            printf("Voc� possui %d anos � maior de idade %d", idade, r1);
            break;

    case 0:
        printf("Voc� possui %d anos � menor de idade %d", idade, r1);
        break;


    default:
        printf("Voc� n�o existe");
    }

}
