#include <stdio.h>
/*
Escreva uma função que recebe uma string como parâmetro e a inverte. Por exemplo, se a entrada for "hello", a saída deve ser "olleh".
*/

int tamanhoString(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

char inverterString(char s[]){
    int j,i,x=0;
    char stringInvertida[100];
     while (s[i] != '\0')
    {
        i++;
    }
    for(j=i;j>=0;j--){
        stringInvertida[x] = s[j];
    }

    return stringInvertida;
}

int main()
{


    char ola[20] = "hello";
    char palavraUser[20];
    printf("Digite uma palavra: \n");
    scanf("%s", palavraUser);

    int length = tamanhoString(palavraUser);
    char palavraInvertida = inverterString(ola);
    printf("%s", palavraInvertida);
    printf("%d", length);
    return 0;
}