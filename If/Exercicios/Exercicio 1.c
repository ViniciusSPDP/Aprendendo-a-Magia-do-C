#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    int idade, resultado;
    setlocale(LC_ALL, "");

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    resultado = idade >= 18 ? printf("Você possui %d anos é maior de idade", idade): printf("Você possui %d anos é menor de idade", idade);


}
