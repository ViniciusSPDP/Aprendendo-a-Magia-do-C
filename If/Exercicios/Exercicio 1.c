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

    resultado = idade >= 18 ? printf("Voc� possui %d anos � maior de idade", idade): printf("Voc� possui %d anos � menor de idade", idade);


}
