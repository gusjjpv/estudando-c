// Crie um vetor de 10 números inteiros. Encontre e imprima o maior e o menor elemento do vetor.
#include <stdio.h>

main()
{
    int numeros[10], maior = 0, menor, i;

    printf("informe um numero: \n");
    scanf("%d", &menor);
    numeros[0] = menor;

    for (i = 1; i < 10; i++)
    {
        printf("Informe um numero: \n");
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (numeros[i] > numeros[i + 1])
        {
           if(numeros[i] > numeros[i + 2])
        }
    }
}