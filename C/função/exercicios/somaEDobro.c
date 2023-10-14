/*
Escreva um programa que solicite dois numeros ao usuario e apresente na tela o resultado da sua soma e o dobro de cada um deles.
*/

#include <stdio.h>

int soma(int x, int y){
    return x + y;
}
int dobro(int x){
    return x*2;
}

int main(){
    
    int resulSoma, resulDobro,resulDobro2, num1, num2;
    printf("Informe os dois numeros: \n");
    scanf("%d %d", &num1,&num2);

    resulSoma = soma(num1, num2);
    resulDobro = dobro(num1);
    resulDobro2 = dobro(num2);

    printf("a soma de %d e %d é igual a %d, o dobro de %d é %d e o dobro de %d é %d", num1, num2, resulSoma, num1, resulDobro, num2, resulDobro2);
    //o dobro pode ser feito assim
    printf("%d %d", dobro(num1), dobro(num2));
    
    return 0;
}