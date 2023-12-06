// Crie um vetor de 10 números inteiros. Encontre e imprima o maior e o menor elemento do vetor.
#include <stdio.h>

main()
{
    int vetor[10];
    int i, maior, menor;

    for (i = 0; i < 10; i++)
    {
        printf("Informe um numero: \n");
        scanf("%d", &vetor[i]);
    }

    /*for(i=0;i<10;i++){
        printf("%d-%d\n",i+1, vetor[i]);
    }*/

    maior = menor = vetor[0]; //Inicialize as variáveis maior e menor com o primeiro elemento do vetor

    for(i=1;i<10;i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("maior elemento é %d\n",maior);
    printf("menor elemento é %d\n",menor);
}
