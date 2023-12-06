#include <stdio.h>
/*
Crie um programa onde o usuário digita três valores e imprima na tela o menor
valor, devendo para isso, criar uma função Menor do tipo void que imprime na
tela o menor valor.
*/

void menor(int a, int b, int c){
    if(a < b){
        if(a<c){
            printf("o menor entre %d,%d e %d é : %d",a,b,c,a);
        }
    }else{
        if(b<c){
            printf("o menor entre %d,%d e %d é : %d",a,b,c,b);
        } else{
            if(c<a){
                printf("o menor entre %d,%d e %d é : %d",a,b,c,c);
            }
        }
    }
}

int main(){
    int num1,num2,num3;
    printf("informe tres numeros: \n");
    scanf("%d %d %d", &num1,&num2,&num3);

    menor(num1,num2,num3);

    return 0;
}