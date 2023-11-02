#include <stdio.h>

int main()
{
    int N, i;
    float a, b, c, soma, media;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        soma = a * 2 + b * 3 + c * 5;
        media = soma / 10;
        printf("%.1f\n", media);
    }

    return 0;
}