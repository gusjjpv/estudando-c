#include <stdio.h>
/*
faça um programa que leia 25 numeros inteiros, armazene-os em um vetor, solicite um valor de referencia inteiro e:
a) imprima os numeros do vetor que são maiores que o valor referencia.
b) retorne quantos numeros armazenados no vetor são menores que o valor de referencia.
c) retorne quantas vezes o valor referencia aparece no vetor.
*/

int main()
{
    int v[25];
    int i, numRef, qtdRef = 0, qtdMenor = 0;

    printf("Informe os valores inteiros: \n");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &v[i]);
    }
    printf("informe um valor referencia: \n");
    scanf("%d", &numRef);
    printf("numero de referencia foi %d\n", numRef);
    printf("Numeros maiores que %d:\n", numRef);
    for (i = 0; i < 25; i++)
    {
        if (v[i] > numRef)
        {
            printf("%d\n", v[i]);
        }
    }
    printf("Quantidade de numeros menores que %d:\n", numRef);
    for (i = 0; i < 25; i++)
    {
        if (v[i] < numRef)
        {
            qtdMenor++;
        }
    }
    printf("%d\n", qtdMenor);
    for (i = 0; i < 25; i++)
    {
        if (v[i] == numRef)
        {
            qtdRef++;
        }
    }
    printf("a quantidades de vezes que o %d se repetiu foi %d vezes\n", numRef, qtdRef);
    return 0;
}