#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float salario, resultado;
    setlocale(LC_ALL, "");
    int anos, idade, n;

    printf("Informe o sal�rio: ");
    scanf("%f", &salario);

    printf("Informe tempo de servi�o (anos): ");
    scanf("%d", &anos);

    printf("Informe idade: ");
    scanf("%d", &idade);

    n = anos > 3 && idade > 30 && salario<4000;

    switch(n){
    case 1:
        printf("Receber� ajuste");
        break;
    default:
        printf("N�o receber� ajuste");
        break;
    }


}
