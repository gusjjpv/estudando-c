#include <stdio.h>
/*
Crie um programa onde o usuário digita dois valores e imprima na tela a soma
destes valores na tela, utilizando uma função do tipo int.
*/

int soma(int x, int y);

int main()
{

    int num1, num2, resultado;

    printf("informe dois numeros: \n");
    scanf("%d %d", &num1, &num2);
    resultado = soma(num1, num2);
    printf("o resultado da soma entre %d e %d foi %d", num1, num2, resultado);

    return 0;
}

int soma(int x, int y)
{
    return x + y;
}