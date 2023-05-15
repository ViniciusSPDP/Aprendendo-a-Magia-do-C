#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>
#define PI 3.14159

void main()
{
    setlocale(LC_ALL, "");

    double c, r;
    double estado;

    r = 5;
    c = 2 * PI * r;

    printf("O comprimento da circunferencia = %f \n", c);
    system("pause");

}
