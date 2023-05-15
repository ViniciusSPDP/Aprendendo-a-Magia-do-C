#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float n1, n2, r1;
    setlocale(LC_ALL, "");

    printf("Informe a distância percorrida ");
    scanf("%f", &n1);

    printf("Informe a quantidade de litros gastos ");
    scanf("%f", &n2);

    r1 = n1/n2;

    printf("O consumo médio do veiculo = %.2f ", r1);
    system("pause");

}
