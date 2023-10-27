/* media.c - calcula a media de um aluno
 o 'include' serve para incluir bibliotecas de comandos, o stdio.h é a biblioteca padão de entrada e saida*/
#include <stdio.h>
// sempre tem que ter um main
int main()
{
    float a, b, c;
    // printf vai exibir a mensagem
    printf("Notas? ");

    // scanf vai ler os dados. Sempre colocar o '&' antes da variavel.
    scanf("%f %f", &a, &b);
    c = (a + b) / 2;

    /* '%.1f' indica um valor do tipo float com apenas uma casa decimal, o '\n' indica uma nova linha tipo o 'l' no portugol*/
    printf("Media = %.1f\n", c);

    if (c >= 6.0)
    {
        printf("aprovado\n");
    }
    else
        printf("reprovado\n");

    // o 'return' vai indicar o fim da execução do main()
    return 0;
    // todas as palavras reservadas devem ser escritas com letras minusculas
}