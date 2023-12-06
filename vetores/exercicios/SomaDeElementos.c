/*
Peça ao usuário para inserir 5 números inteiros em um vetor. Em seguida, calcule e imprima a soma de todos os elementos do vetor.
*/

#include <stdio.h>

main()
{
    int numeros[5], i, soma=0;

    for (i = 0; i < 5; i++)
    {
        printf("informe o %d° numero: \n", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("a soma dos elementos do vetor é %d", soma);
}