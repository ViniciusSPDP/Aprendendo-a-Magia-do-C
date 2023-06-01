#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    setlocale(LC_ALL, "");

    char s ='s';
    float valorpizza;
    int i = 1, n;

    printf("Menu do cardapio \n \n");
    do
    {
        printf("1 - Pizza de frango com catupiry R$ 40,00\n");
        printf("2 - Pizza de calabaresa R$ 35,00\n");
        printf("3 - Pizza veneza R$ 35,70 \n");
        printf("4 - Pizza a moda do zé R$ 40,90\n");


        printf("\nDigite o número da pizza\n");
        scanf("%d", &n);

        switch(n)
        {
        case 1:
            valorpizza = valorpizza + 40;
            break;
        case 2:
            valorpizza = valorpizza + 35;
            break;
        case 3:
            valorpizza = valorpizza + 35.70;
            break;
        case 4:
            valorpizza = valorpizza + 40.90;
            break;
        }

        if(i==1)
        {

            printf("\nVoce quer meio a meio ?\n");
            scanf(" %c", &s);
            i++;
        }
        else if(i>=2)
        {
            s = 'n';

            if(s == 'n')
            {
                valorpizza = valorpizza/2;
            }
        }
        printf("\n\n%d %c\n\n", i, s);

    }while(s == 's');


}
