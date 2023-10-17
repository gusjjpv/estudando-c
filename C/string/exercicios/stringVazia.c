#include <stdio.h>
/*
Escreva um programa que leia nomes e os apresente na tela ate que um nome vazio seja introduzido pelo operador.
*/

int main(){
    
    char Nome[100];
   
    //usando gets e puts
    while(1){
        puts("Nome: ");
        gets(Nome);
        if(Nome[0]=='\0'){
            break;
        }else{
            printf("NOme introduzido: %s", Nome);
        }
    }

//usando printf e scanf n da muito certo
   /* while(1){
        printf("Informe o Nome: \n");
        scanf("%s", Nome);
        if(Nome[0] == '\0'){
            break;
        }else{
            printf("Nome informado: %s\n", Nome);
        }
    }
*/

    return 0;
}