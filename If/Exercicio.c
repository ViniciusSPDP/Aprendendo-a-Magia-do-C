#include <stdio.h>
#include <locale.h>

void main()
{
    int n;
    setlocale(LC_ALL, "");

    printf("Digite um n�mero ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("%d � par ! \n", n);
    } else{
        printf("%d � impar \n", n);
    }

    system("pause");

}
