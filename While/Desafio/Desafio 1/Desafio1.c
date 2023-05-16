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


    if(i<=i2)
    {
        while(i<=i2)
        {
            printf("%d \n", i);
            i++;
        }
    }

    else if(i2<=i)
    {
        while(i2<=i)
        {
            printf("%d \n", i2);
            i2++;
        }

    }
    else
    {
        printf("Os numeros são iguais \n");

    }



    printf("Terminou a contagem !\n");


}
