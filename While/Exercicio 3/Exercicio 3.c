#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main()
{
    setlocale(LC_ALL, "");
    int i,i2;

    printf("Digite um numero inteiro para iniciar a contagem\n");
    scanf("%d", &i);

    printf("Digite um numero inteiro para finalizar a contagem\n");
    scanf("%d", &i2);


    while(i<=i2)
    {

        printf("%d\n", i);
                i++;
    }

    printf("Terminou a contagem !\n");


}
