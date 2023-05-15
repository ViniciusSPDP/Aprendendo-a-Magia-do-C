#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float a, b, c, delta, x1, x2;
    setlocale(LC_ALL, "");
    char nome[50];

    printf("Informe o valor de A: ");
    scanf("%f", &a);

    printf("Informe o valor de B: ");
    scanf("%f", &b);

    printf("Informe o valor de C: ");
    scanf("%f", &c);

    delta = (pow(b,2)) - 4*a*c;

    x1 = (-b + (sqrt(delta)))/(2*a);
    x2 = (-b - (sqrt(delta)))/(2*a);

    printf("A solução da equação é: X1 = %.2f e X2 = %.2f \n", x1, x2);
    system("pause");

}
