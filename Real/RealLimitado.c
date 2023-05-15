#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL, "");

    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    printf("O número digitado foi R$ %.2f !!! \n", num);

    system("pause");


}
