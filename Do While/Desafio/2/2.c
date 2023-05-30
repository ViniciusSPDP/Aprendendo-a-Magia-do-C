#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void main()
{
    setlocale(LC_ALL, "");
    int i,i2;
    char res;
    res = 's';

    while (res == 's' || res =='S')
    {

        printf("Digite um numero inteiro para iniciar a contagem\n");
        scanf("%d", &i);

        printf("Digite um numero inteiro para finalizar a contagem\n");
        scanf("%d", &i2);


        if(i<=i2)
        {
            do
            {
                printf("%d \n", i);
                i++;
            }while(i<=i2);
        }

        else if(i2<=i)
        {
            do
            {
                printf("%d \n", i2);
                i2++;
            }while(i2<=i);

        }
        else
        {
            printf("Os numeros são iguais \n");

        }

        printf("Você deseja continuar o programa digite {s} caso queira senão digite qualquer tecla \n");
        scanf(" %c", &res);

    }


    printf("Terminou a contagem !\n");


}
