#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){

    int i =1, soma=0;

    do{
        soma = soma + i;
        i++;
    }while(i<=10);
    printf("O resultado da soma de 1 a 10 = %d", soma);


}
