#include <stdio.h>

/*

# DEFINIÇÃO:
    Uma STRING é um conjunto de caracteres armazenados num vetor.

No contexto do livro "Linguagem C" de Luís Damas, uma **string** é uma sequência de caracteres. Caracteres são os símbolos individuais, como letras, números, espaços em branco e símbolos especiais. As strings são usadas para representar texto em programas de computador.

Para entender melhor, imagine uma string como uma sequência de letras em uma palavra ou uma frase em um livro. Por exemplo, a palavra "HELLO" é uma string composta pelas letras 'H', 'E', 'L', 'L' e 'O'.

OBS: Em C, as strings são representadas utilizando aspas, enquanto os caracteres são representados entre aspas simples.
    ex. string:
            "Luis"
            "Zé Da Manga"
    ex. caracteres:
            'L'
            'A'
            '4'

Em C, uma string é representada como um array (ou vetor) de caracteres, onde cada caractere é armazenado em uma posição do array. O último caractere da string é sempre um caractere especial chamado de "terminador de string" ou "null character", representado pelo símbolo '\0'. Ele indica o final da string.

Aqui está um exemplo de como você pode declarar e inicializar uma string em C:
*/
int main()
{
    // Declarando e inicializando uma string
    char palavra[] = "HELLO";
    char nome[20] = "gus";
    char nomeJoao[20] = {'j', 'o', 'a', 'o'}; // vetor de caracteres
    // Imprimindo a string
    printf("String: %s\nNome: %s\nNome com caracter: %s\n", palavra, nome, nomeJoao);
    /*
Neste exemplo, a string "HELLO" é armazenada na variável `palavra`. O caractere `'\0'` é automaticamente adicionado ao final da string pelo compilador para indicar o seu término.
OBS: Usamos um formato proprio para string '%s' dentro da função printf(linha: 32).
Então, uma string é essencialmente uma sequência de caracteres armazenados em posições consecutivas da memória do computador, terminando com `'\0'` para indicar o fim da string.

#LEITURA DE STRING

A função scanf permite realizar a leitura de strings utilizando o formato %s. no entanto, a variavel que recebe a string NÃO É PRECENDIDA de um '&', ao contrario do que acontece com todos os outros tipos de variaveis que são enviadas para o scanf.*/

char Nome[20],Sobrenome[50];
printf("Informe seu nome: \n");
scanf("%s", Nome);
printf("Informe seu Sobrenome: \n");
scanf("%s", Sobrenome);
printf("Nome Completo: %s %s\n", Nome, Sobrenome);

//OBS: O scanf só realiza a leitura d euma unica palavra, se der 'espaço','tab' ou 'enter', o scanf vai terminar a leitura e colocar todos os caracteres lidos ate essa altura na variavel que foi passada.

char teste[50];
printf("Informe seu nome: \n");
scanf("%s", teste);

// Função gets: permite colocar na variavel que recebe por parametro, todos os caracteres introduzidos pelo usuario. ao contrario do scanf, o gets não esta limitado a leitura de uma unica palavra.
/*char nome2[50];
printf("informe o nome: ");
gets(nome2);
printf("nome: %s", nome2);
OBS: o gets n esta funcionando, n sei se é o compilador(vscode), mas o codigo eu copiei direto do livro.

##  Passagem de string como parametro para função
Pode ser representada de duas formas distintas, mas equivalentes:
    int funcaoexemplo(char s[]) ou int funcaoexemplo(char *s);
                                forma habitualmente ultilizada

*/
    return 0;
}
