/*
Escreva um programa que, recorrendo a funções distintas, escreva na tela a seguinte saida:
***
*****
*******
*****
***
*/

#include <stdio.h>

void linhas3x()
{
    int i;
    for (i = 1; i < 4; i++)
    {
        putchar('*');
    }
    putchar('\n');
}

void linhas5x()
{
    int i;
    for (i = 1; i < 6; i++)
    {
        putchar('*');
    }
    putchar('\n');
}

void linhas7x()
{
    int i;
    for (i = 1; i < 8; i++)
    {
        putchar('*');
    }
    putchar('\n');
}

int main()
{
    linhas3x();
    linhas5x();
    linhas7x();
    linhas5x();
    linhas3x();
    return 0;
}