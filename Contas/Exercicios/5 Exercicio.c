#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float sminimo, totalvendas, r1;
    setlocale(LC_ALL, "");
    char nome[50];

    printf("Digite o seu nome: ");
    gets(nome);

    printf("Informe o salário mínimo: ");
    scanf("%f", &sminimo);

    printf("Informe o total de vendas do mês: ");
    scanf("%f", &totalvendas);

    r1 = sminimo + (totalvendas*0.15);

    printf("O vendedor(a) %s recebeu no fim do mês o valor de %.2f", nome, r1);
    system("pause");
}
