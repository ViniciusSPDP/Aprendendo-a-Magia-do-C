#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float n1, n2, n3, n4, r1;
    setlocale(LC_ALL, "");

    char nome[50];

    printf("Qual seu  nome ? ");
    gets(nome);

    printf("Digite a nota do primeiro bimestre ? ");
    scanf("%f", &n1);

    printf("Digite a nota do Segundo bimestre ? ");
    scanf("%f", &n2);

    printf("Digite a nota do Terceiro bimestre ? ");
    scanf("%f", &n3);

    printf("Digite a nota do Quarto bimestre ? ");
    scanf("%f", &n4);

    r1 = (n1 + n2 + n3 + n4)/4;

    if(r1 >=6){
        printf("%s, sua nota final � de %.2f Parab�ns voc� foi APROVADO\n", nome, r1);
    }
    else if(r1 < 6 && r1>=3){
        printf("%s, sua nota final � de %.2f, nessas f�ria voc� vai ter que vim na escola voc� ficou de RECUPERA��O\n", nome, r1);
    }
    else{
        printf("%s, sua nota final � de %.2f desculpa e se esfor�e mais voc� foi REPROVADO\n      3
               ", nome, r1);
    }

    system("pause");

}
