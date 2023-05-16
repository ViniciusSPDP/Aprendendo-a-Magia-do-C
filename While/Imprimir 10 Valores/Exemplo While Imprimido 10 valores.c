#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main()
{
    setlocale(LC_ALL, "");
    float n1, n2, r1;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {
        printf("Digite um numero: ");
        scanf("%f", &n1);
        printf("Digite outro numero: ");
        scanf("%f", &n2);

        r1 = n1 + n2;

        printf("%.1f + %.1f = %.1f \n", n1, n2, r1);
        printf("Deseja continuar o calculo com a soma de outros dois números ?\n");

        printf("Tecle [S] para continuar ou qualquer outra tecla para sair\n");
        scanf(" %c", &opcao);

        printf("\n");

    }
    printf("Programa finalizado :0");



}
