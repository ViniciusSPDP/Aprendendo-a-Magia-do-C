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
    printf("1 - � vista \n");
    printf("2 - � prazo \n");
    printf("Escolha o pagamento (1 ou 2)");
    scanf("%d", &n);

    if(n==1){
        resultado = n1-(n1*0.1);
        printf("O total a pagar a vista � %.2f", resultado);

    }else{
        printf("O total a pagar a prazo � de %.2f", n1);
    }

}
