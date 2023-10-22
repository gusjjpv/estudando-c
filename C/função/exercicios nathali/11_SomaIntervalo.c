#include <stdio.h>
/*
 Faça uma função que receba dois números inteiros e retorne a soma dos números
inteiros existentes entre eles. Por exemplo: Para os valores de entrada 2 e 8, a
soma será 3+4+5+6+7=25.
*/

int Soma(int a, int b)
{
    int soma = 0, i;

    for (i = a + 1; i > a && i < b; i++)
    {
        soma = soma + i;
    }

    return soma;
}

int main()
{
    int num1, num2, soma;

    printf("informe dois numeros:\n");
    scanf("%d %d", &num1, &num2);
    if (num1 < num2)
    {
        soma = Soma(num1, num2);
        printf("%d", soma);
    } else{
        printf("ERRO: o primeiro numeor deve ser maior que o segundo\n");
    }

    return 0;
}