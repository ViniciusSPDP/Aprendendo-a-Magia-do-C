#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float n1, resultado;
    setlocale(LC_ALL, "");
    int n;

    printf("Informe o valor do produto: ");
    scanf("%f", &n1);


    printf("Forma de pagamento \n");
    printf("1 - à vista \n");
    printf("2 - à prazo \n");
    printf("Escolha o pagamento (1 ou 2) ");
    scanf("%d", &n);
    resultado = n1-(n1*0.1);

    switch(n){
    case 1:
        printf("O total a pagar a vista é %.2f", resultado);
        break;
    case 2:
        printf("O total a pagar a prazo é de %.2f", n1);
        break;
    default:
        printf("Comando invalido");
        break;
    }




}

