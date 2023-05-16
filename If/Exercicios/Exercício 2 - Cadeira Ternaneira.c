#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float nc, resultado;
    setlocale(LC_ALL, "");

    printf("Informe o número de cadeiras que irá comprar ");
    scanf("%f", &nc);

    resultado = nc > 50 ? 40*nc: 45*nc;

    printf("O total a pagar: = %.2f", resultado);

}
