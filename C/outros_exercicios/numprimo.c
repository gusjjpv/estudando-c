#include <stdio.h>

int main()
{
    int num, cont, soma;

    printf("Informe um numero: \n");
    scanf("%d", &num);

    for (cont = 0; cont <= num; cont++)
    {
        soma = soma + cont;
    }

    printf("%d\n", soma);

    return 0;
}