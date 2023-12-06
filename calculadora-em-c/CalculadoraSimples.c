/*
Crie uma calculadora que permita ao usuário inserir dois números e uma operação (adição, subtração, multiplicação ou divisão) como entrada. Use funções separadas para realizar cada operação e retorne o resultado.
*/
#include <stdio.h>

float soma(float a, float b);
float subtracao(float a, float b);
float multiplicacao(float a, float b);
float divisao(float a, float b);

int main()
{

    char operacao, deNovo;
    float num1, num2, Soma, Divisao, Subtracao, Multiplicacao;
    do
    {
        printf("\tInforme a opeção desejada: \n\t   Adição: +\n\t   Subtração: -\n\t   Multiplicação: x\n\t   Divisão: /\n\t   :");
        scanf(" %c", &operacao);

        if (operacao == '+' || operacao == '-' || operacao == 'x' || operacao == '/')
        {
            printf("\nInforme o primeiro numero:\n");
            scanf("%f", &num1);

            printf("informe o segundo numero ");
            scanf("%f", &num2);
            switch (operacao)
            {
            case '+':

                Soma = soma(num1, num2);
                printf("O Resultado foi: %.2f", Soma);
                break;

            case '-':

                Subtracao = subtracao(num1, num2);
                printf("O Resultado foi: %.2f", Subtracao);
                break;
            case 'x':

                Multiplicacao = multiplicacao(num1, num2);
                printf("O Resultado foi: %.2f", Multiplicacao);
                break;
            case '/':

                Divisao = divisao(num1, num2);

                if (Divisao == 0)
                {
                    printf("ERRO: Divisão por zero!\n");
                }
                else
                {
                    printf("O Resultado foi: %.2f", Divisao);
                }
                break;
            default:
                printf("Opeção invalida");
                break;
            }
        }

        printf("\n\t   Deseja fazer outra operação?\n Sim: S\nNão: N");
        scanf(" %c", &deNovo);

    } while (deNovo == 'S' || deNovo == 's');
    return 0;
}

float soma(float a, float b)
{
    return a + b;
}
float subtracao(float a, float b)
{
    return a - b;
}
float multiplicacao(float a, float b)
{
    return a * b;
}
float divisao(float a, float b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        return 0;
    }
}