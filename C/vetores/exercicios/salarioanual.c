/*
Escreva um programa que realize a leitura dos salarios pagos a um individuo durante um ano. em seguida, o programa devera mostrar os valores mensais e o total anual.
*/

#include <stdio.h>

int main(){
    float salarios[12];
    int contador;
    float soma=0.0;

    for(contador = 0;contador < 12; contador++){
        printf("Informe o salario do %d° mes", contador+1);
        scanf("%f", &salarios[contador]);
        
    }

    for(contador = 0;contador<12;contador++){
        printf("O salario do %d° mes foi: %.2f\n", contador+1, salarios[contador]);
        soma = soma + salarios[contador];
    }
    printf("o total anual dos salarios é: %.2f", soma);

    return 0;
}