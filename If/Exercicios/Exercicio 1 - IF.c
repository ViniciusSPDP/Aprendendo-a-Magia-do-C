#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    int idade;
    setlocale(LC_ALL, "");

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Voc� possui %d anos � maior de idade", idade);
    } else if(idade >= 17){
        printf("Voc� possui %d anos � menor de idade", idade);
    }else{
    printf("Voc� n�o existe %d anos", idade);
    }
}
