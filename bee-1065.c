#include <stdio.h>

int main()
{

    int i, numero[5], qtd = 0;

    for (i = 0; i < 5; i++)
        scanf("%d", &numero[i]);

    for (i = 0; i < 5; i++)
    {
        if (numero[i] % 2 == 0)
            qtd++;
    }

    printf("%d valores pares\n", qtd);
}