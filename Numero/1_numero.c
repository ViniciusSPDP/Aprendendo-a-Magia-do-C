#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    //Todos caracater possiveis
    //Vazio = Todos idiomas
    setlocale(LC_ALL, "");
    int numero;
    printf("Digite um N�mero: ");
    scanf("%d", &numero);
    printf("O n�mero digitado foi %d \n", numero);
    system("pause");
}
