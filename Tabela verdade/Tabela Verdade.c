#include <stdio.h>
#include <locale.h>
#include <stdbool.h>


void main()
{
    setlocale(LC_ALL, "");
    printf("Operador E \n");
    printf("V e V = %d \n", true && true);
    printf("V e F = %d \n", true && false);
    printf("F e V = %d \n", false && true);
    printf("F e F = %d \n\n", false && false);


    printf("Operador OU \n");
    printf("V e V = %d \n", true || true);
    printf("V e F = %d \n", true || false);
    printf("F e V = %d \n", false || true);
    printf("F e F = %d \n\n", false || false);

    printf("Operador N�O \n");
    printf("N�o V = %d \n", !true);
    printf("N�o F = %d \n", !false);
}
