/*
Crie dois vetores de 5 números inteiros cada. Multiplique os elementos correspondentes dos dois vetores e armazene os resultados em um terceiro vetor. Em seguida, imprima o vetor resultante.
*/

#include <stdio.h>

int main()
{

    int vetor1[5], vetor2[5], vetorMultiplicacao[5];
    int i;

    for(i=0;i<5;i++){
        printf("Informe dois numeros: \n");
        scanf("%d", &vetor1[i]);
        scanf("%d", &vetor2[i]);
    }

    for(i=0;i<5;i++){
        vetorMultiplicacao[i] = vetor1[i] * vetor2[i];
    }

    for(i=0;i<5;i++){
        printf("%d-%d\n",i+1, vetorMultiplicacao[i]);
    }


    return 0;
}