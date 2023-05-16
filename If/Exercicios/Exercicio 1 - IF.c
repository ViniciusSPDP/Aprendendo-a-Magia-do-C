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
        printf("Você possui %d anos é maior de idade", idade);
    } else if(idade >= 17){
        printf("Você possui %d anos é menor de idade", idade);
    }else{
    printf("Você não existe %d anos", idade);
    }
}
