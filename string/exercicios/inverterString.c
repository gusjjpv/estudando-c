#include <stdio.h>
/*
Escreva uma função que recebe uma string como parâmetro e a inverte. Por exemplo, se a entrada for "hello", a saída deve ser "olleh".
*/
// Função para inverter uma string
void inverterString(char s[]){
    int tamanho = 0;
    while(s[tamanho] != '\0'){
        tamanho++;
    }

    int i = 0;
    int j = tamanho - 1;

    while(i<j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }

}

int main(){

    char palavra[] = "hello";
   /* 
    printf("Digite uma palavra: \n");
    scanf("%s", palavra);
*/
    printf("Palavra Normal: %s\n", palavra);

  /*    Invertendo com vetor de caracteres  
    char num[5] = {'h','e','l','l','o'}, x;
    for(x = 4;x>=0;x--){
        printf("%c", num[x]);
    }
 */

//invocando a função de inverter
    inverterString(palavra);
    printf("Palavra invertida: %s\n", palavra);

    return 0;
}