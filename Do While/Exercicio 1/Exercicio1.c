#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){

    setlocale(LC_ALL, "");
    int i =1;

    do{
        printf("O dobro do número %d = %d \n", i, i*2);
        i++;
    }while(i<=10);

}
