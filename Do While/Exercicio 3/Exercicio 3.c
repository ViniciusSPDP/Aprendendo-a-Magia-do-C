#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
    setlocale(LC_ALL, "");

    int inicial, final;

    printf("Digite o número inicial da contagem: ");
    scanf("%d", &inicial);

    printf("Digite o número final da contagem: ");
    scanf("%d", &final);

    do{
        printf("%d \n", inicial);
        inicial++;
    }while(inicial<=final);

    printf("Terminou a contagem !");
}
