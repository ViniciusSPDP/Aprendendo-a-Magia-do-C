#include <stdio.h>
#include <locale.h>

void main()
{
    int n;
    setlocale(LC_ALL, "");

    printf("Digite um número ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("%d é par ! \n", n);
    } else{
        printf("%d é impar \n", n);
    }

    system("pause");

}
