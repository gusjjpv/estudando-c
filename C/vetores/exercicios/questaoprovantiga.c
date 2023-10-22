#include <stdio.h>
/*
faça um programa que leia 25 numeros inteiros, armazene-os em um vetor, solicite um valor de referencia inteiro e:
a) imprima os numeros do vetor que são maiores que o valor referencia.
b) retorne quantos numeros armazenados no vetor são menores que o valor de referencia.
c) retorne quantas vezes o valor referencia aparece no vetor.
*/

int main()
{
    int v[5];
    int i, numRef, qtdRef = 0;

    printf("informe um valor referencia: \n");
    scanf("%d", &numRef);

    v[0] = numRef;
    printf("numero de referencia foi %d\n", numRef);
    printf("Informe os valores do vetor: \n");
    for (i = 1; i < 5; i++)
    {
        scanf("%d", &v[i]);
    }

    for (i = 1; i < 5; i++)
    {
        if (v[i] > numRef)
        {
            printf("%d é maior que %d\n", v[i], numRef);
        }
        if (v[i] < numRef)
        {
            printf("%d é menor que %d\n", v[i], numRef);
        }
        if (v[i] == v[0])
        {
            qtdRef++;
        }
    }
    printf("a quantidades de vezes que o %d se repetiu foi %d", numRef, qtdRef);
    return 0;
}