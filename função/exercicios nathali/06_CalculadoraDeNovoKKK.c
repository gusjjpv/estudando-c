#include <stdio.h>
/*Crie um programa onde o usuário digita dois valores e imprima a soma,
subtração, multiplicação e divisão do primeiro valor pelo segundo, sendo que
deverá ser criada uma função para cada operação.
*/

float Soma(int a, int b);
float Subtracao(int a, int b);
float Multiplicacao(int a, int b);
float Divisao(int a, int b);

int main()
{

    float num1, num2;
    float soma, subtracao, multiplicacao, divisao;
    printf("informe dois numeros para as operações: \n");
    scanf("%f %f", &num1, &num2);

    soma = Soma(num1, num2);
    subtracao = Subtracao(num1, num2);
    multiplicacao = Multiplicacao(num1, num2);
    divisao = Divisao(num1, num2);

    printf("resultado soma: %f\nresultado subtração:%f\nresultado multiplicação: %f\nresultado divisao: %f\n",soma,subtracao,multiplicacao,divisao);

    return 0;
}

float Soma(int a, int b)
{
    return a + b;
}

float Subtracao(int a, int b)
{
    return a - b;
}

float Multiplicacao(int a, int b)
{
    return a * b;
}

float Divisao(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("ERRO: divisão por zero");
    }
}
