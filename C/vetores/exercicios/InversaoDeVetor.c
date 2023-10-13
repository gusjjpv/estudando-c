// Peça ao usuário para inserir 6 números inteiros em um vetor. Em seguida, inverta a ordem dos elementos no vetor e imprima o vetor resultante.

#include <stdio.h>

int main()
{

    int vetor[6];
    int i;

    for(i=0; i<6; i++){
        printf("Informe um numero: \n");
        scanf("%d", &vetor[i]);
    }
//mostra invertido
    for(i=5; i >= 0; i--){
        printf("%d", vetor[i]);
    }
//mostrar normal
   /* for(i=0;i<6;i++){
        printf("%d", vetor[i]);
    }
*/
    return 0;
}