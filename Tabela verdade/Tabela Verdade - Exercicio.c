#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
    int n1, n2, r1, r2, r3;
    setlocale(LC_ALL, "");+

    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("Digite um outro número: ");
    scanf("%d", &n2);

    r1 = n1 > n2 && n1 == n2;
    printf("%d > %d e %d == %d o resultado é %d\n\n", n1, n2, n1, n2, r1);

    r2 = n1 <= n2 || n1 != n2;
    printf("%d <= %d ou %d != %d o resultado é %d\n\n", n1, n2, n1, n2, r2);

    r3 = !(n1 < n2);
    printf("não (%d < %d) resultado é %d\n\n", n1, n2, r3);

    system("pause");


}
