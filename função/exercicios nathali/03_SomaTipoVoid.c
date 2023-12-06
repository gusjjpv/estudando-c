#include <stdio.h>

/*
Crie um programa onde o usuário digita dois valores e imprima na tela a soma
destes valores na tela, utilizando uma função do tipo void
*/

void soma(int a, int b);

int main(){
    
    int num1, num2;

    printf("informe dois numeros: \n");
    scanf("%d %d", &num1,&num2);

    soma(num1,num2);

    return 0;
}
//como o tipo void n tem retorno, colocamos o print dentro da função.
void soma(int a, int b){
    int soma = a + b;
    printf("A soma de %d e %d é: %d\n", a, b, soma);
}