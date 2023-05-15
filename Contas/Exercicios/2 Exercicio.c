#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float n1, n2, n3, n4, r1;
    setlocale(LC_ALL, "");

    char nome[50];

    printf("Qual seu  nome ? ");
    gets(nome);

    printf("Digite a nota do primeiro bimestre ? ");
    scanf("%f", &n1);

    printf("Digite a nota do Segundo bimestre ? ");
    scanf("%f", &n2);

    printf("Digite a nota do Terceiro bimestre ? ");
    scanf("%f", &n3);

    printf("Digite a nota do Quarto bimestre ? ");
    scanf("%f", &n4);

    r1 = (n1 + n2 + n3 + n4)/4;

    printf("%s, sua nota final é de %.2f\n", nome, r1);
    system("pause");

}
