#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL, "");

    float num;

    printf("Digite um n�mero: ");
    scanf("%f", &num);

    printf("O n�mero digitado foi R$ %.2f !!! \n", num);

    system("pause");


}
