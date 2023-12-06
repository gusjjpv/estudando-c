#include <stdio.h>

/*
Implementar a função maior que devolve o maior de dois números inteiros
passados como parâmetro.
*/

int maior(int a, int b);

int main()
{

    int num1, num2, resulMaior;

    printf("Informe dois numeros: \n");
    scanf("%d %d", &num1, &num2);

    resulMaior = maior(num1, num2);
    printf("o maior numero entre %d e %d é %d", num1, num2, resulMaior);

    return 0;
}

int maior(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}