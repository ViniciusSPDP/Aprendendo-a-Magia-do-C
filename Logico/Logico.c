#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
    setlocale(LC_ALL, "");

    bool v, f;

    v = true;
    f = false;

    printf("O melhor time do mundo é o Corinthians ? %d\n", v);
    printf("2 + 2 = 4 ? %d\n ", v);
    printf("2 + 5 = 4 ? %d\n ", f);
    system("pause");

}
