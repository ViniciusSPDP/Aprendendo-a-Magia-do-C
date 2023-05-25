#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
    setlocale(LC_ALL, "");
    int i = 0;

    do{
        printf("%d\n", i);
        i = i+2;
    }while(i<=10);

    printf("\nTerminou a contagem !\n");

    system("pause");

}
