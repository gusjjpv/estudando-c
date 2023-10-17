#include <stdio.h>
//Devolva o numero de caracteres existentes na string(sem contar o '\0')
int strlen(char *s){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}

//Verifique se uma string contem ou não algum caractere, devolvendo o valor logico correspondente.
int isnull(char s[]){
    return(s[0] == '\0');
}


int main(){
    
    char s[10] = "gus";
    int stringLength = 0, stringTemOuNaoCarac = 0;
    stringTemOuNaoCarac = isnull(s);
    if(stringTemOuNaoCarac == 1){
        printf("A string não contem nenhum caractere\n");
    } else{
        printf("A string contem caracteres\n");
    }
    stringLength = strlen(s);
    
    printf("Tamanho da string: %s tem %d caracteres\n",s, stringLength);
    return 0;
}