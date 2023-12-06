#include <stdio.h>
/*
Faça um programa que leia os limites inferior e superior de um intervalo e imprima todos os numeros pares no intervalo aberto e seu somatorio. suponha que os numeros digitados sao um intervalo crescente.
exemplo: limite inferior: 3 limite superior: 12 saida 4 6 8 20 soma: 28;
*/

int main() {

    int i, limInferior, limSuperior, soma = 0;

    printf("Informe o limite inferior: \n");
    scanf("%d", &limInferior);

    printf("informe o limite superior: \n");
    scanf("%d", &limSuperior);
    
    for(i = limInferior;i >= limInferior && i < limSuperior; i++){
        if(i%2 == 0){
            printf("%d", i);
            soma = soma + i;
        }
    }

    printf("%d", soma);
        
    
    return 0;
}