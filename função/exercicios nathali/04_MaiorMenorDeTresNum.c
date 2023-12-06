#include <stdio.h>

/*
Crie um programa onde o usuário digita três valores e imprima na tela o maior
valor, devendo para isso, criar uma função Maior do tipo int que retorna o maior
dos três valores.
*/

int maiorMenor(int a, int b, int c);

int main(){

    int num1, num2, num3;
    int resul;

    printf("informe tres numeros: \n");
    scanf("%d %d %d", &num1,&num2,&num3);

    resul = maiorMenor(num1,num2,num3);
    printf("o maior entre %d,%d e %d é : %d",num1,num2,num3,resul);
    return 0;
}

int maiorMenor(int a, int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }
    }else{
        if(b>c){
            return b;
        } else{
            if(c>a){
                return c;
            }
        }
    }
}