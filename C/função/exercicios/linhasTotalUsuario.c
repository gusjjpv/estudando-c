/*
Escreva um programa que faça uma saida parecida com a anterior(linhas()), mas com o total de asteriscos definado pelo usuario, usando apenas uma função.
altere o programa para que possa ser qualquer caractere no lugar do asterisco
*/

#include <stdio.h>

void linhasNx(int numero)
{
    int i;
    for (i = 1; i <= numero; i++)
    {
        putchar('*');
    }
    putchar('\n');
}

// qualquer caractere
void linhasQlqrX(char c, int numero)
{
    int i;
    for (i = 1; i <= numero; i++)
    {
        putchar(c);
    }
    putchar('\n');
}

int main()
{
    int num, i = 1;
    while (num != 0)
    {
        printf("Informe um numero: \n");
        scanf("%d", &num);
        linhasNx(num);
    }
        
    /*printf("Informe um numero: \n");
    scanf("%d", &num);
    linhasNx(num);*/

    linhasQlqrX('$', 3);

    return 0;
}