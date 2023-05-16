#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float salario, resultado;
    setlocale(LC_ALL, "");
    int anos, idade;

    printf("Informe o salário: ");
    scanf("%f", &salario);

    printf("Informe tempo de serviço (anos): ");
    scanf("%d", &anos);

    printf("Informe idade: ");
    scanf("%d", &idade);

    anos > 3 && idade > 30 && salario<4000 ?  printf("Receberá ajuste"): printf("Não receberá ajuste");

}
