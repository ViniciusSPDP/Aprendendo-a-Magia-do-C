#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float salario, resultado;
    setlocale(LC_ALL, "");

    printf("Digite o salário: ");
    scanf("%f", &salario);

    resultado = salario >= 1000 ? salario + (salario*0.10) : salario + (salario*0.05);
    printf("O novo salário = %.2f\n", resultado);


}
