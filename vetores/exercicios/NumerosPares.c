// Crie um vetor de 8 números inteiros. Conte e imprima quantos números pares existem no vetor

#include <stdio.h>

int main()
{
    int vetor[8];
    int i, pares = 0;

    for (i = 0; i < 8; i++)
    {
        printf("Informe um numero: \n");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 8; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            pares = pares + 1;
        }
    }

    printf("existe %d numeros pares no vetor", pares);
    return 0;
}