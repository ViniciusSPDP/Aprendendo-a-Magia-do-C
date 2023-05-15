#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL, "");

    char nome[50];
    char sexo;

    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite o seu sexo: ");
    scanf("%c", &sexo);

    printf("O nome digitado foi %s e sexo %c \n", nome, sexo);
    system("pause");

}
