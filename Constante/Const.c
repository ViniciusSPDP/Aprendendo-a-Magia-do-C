#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
    setlocale(LC_ALL, "");

    const double PI = 3.14159;
    double c,r = 5.0;


    c = 2 * PI * r;
    printf("O comprimento da circunferencia = %f \n", c);
    system("pause");

}
