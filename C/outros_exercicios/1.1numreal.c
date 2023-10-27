#include <stdio.h>

int main()
{
    float numReal, dobro;

    printf("Digite um número real: ");

    scanf("%f", &numReal);

    dobro = numReal * 2;

    printf("Dobro = %.1f\n", dobro);

    return 0;
}