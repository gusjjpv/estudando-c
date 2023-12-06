/*
    Escreva um programa que apresente um menu com as opções Clientes, Fornecedores, Encomendas e Sair
    O programa deve apresentar a opção escolhida pelo usuario ate que esteje sair.
*/
#include <stdio.h>

main(){
    char opcao;
    do{
        printf("\t MENU PRINCIPAL\n");
        printf("\n\n\tClientes");
        printf("\n\n\tFornecedores");
        printf("\n\n\tSair");
        scanf(" %c", &opcao);
        switch (opcao)
        {
            case 'c':
            case 'C': printf("Opção Cliente\n"); 
            break;
            case 'f':
            case 'F': printf("Opção Fornecedores\n");
            break;
            case 's':
            case 'S': break;
            default: printf("Opção INVALIDA!!!\n"); 
        }
    } while(opcao != 's' &&  opcao != 'S');

}