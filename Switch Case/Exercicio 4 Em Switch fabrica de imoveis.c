#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    setlocale(LC_ALL, "");
    int n,r,r1;

    printf("Informe o numero de cadeiras que ira comprar: ");
    scanf("%d", &n);

    r = n > 50;

    switch(r){
        case 1:
        r1 = n*40;
        printf("O total a pagar = %d", r1);
        break;
        default:
        r1 = n*45;
        printf("O total a pagar = %d", r1);
        break;
    }




}
