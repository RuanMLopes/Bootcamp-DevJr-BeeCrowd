#include <stdio.h>

int main()
{
    float numero[6], soma = 0;
    int i, qtd = 0;

    for (i = 0; i < 6; i++)
        scanf("%f", &numero[i]);

    for (i = 0; i < 6; i++)
    {
        if (numero[i] > 0)
        {
            soma += numero[i];
            qtd++;
        }
    }

    printf("%d valores positivos\n", qtd);
    printf("%.1f\n", soma / qtd);
}