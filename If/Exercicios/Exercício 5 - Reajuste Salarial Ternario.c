#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float salario, resultado;
    setlocale(LC_ALL, "");
    int anos, idade;

    printf("Informe o sal�rio: ");
    scanf("%f", &salario);

    printf("Informe tempo de servi�o (anos): ");
    scanf("%d", &anos);

    printf("Informe idade: ");
    scanf("%d", &idade);

    anos > 3 && idade > 30 && salario<4000 ?  printf("Receber� ajuste"): printf("N�o receber� ajuste");

}
