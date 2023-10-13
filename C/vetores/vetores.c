/*
    Um vetor não é mais que um conjunto de elementos consecutivos, todos do mesmo tipo,que podem ser acessados individualmente a partir de um unico nome.

*/

#include <stdio.h>

main()
{
    /*
        Declaração:
           Um vetor em C é declarado da msm forma que uma variavel simples. 
        
        A declaração obedece a seguinte sintaxe:
                tipo nome_variavel[n° de elementos]
            1. tipo- corresponde ao tipo de dados de cada um dos elementos do vetor
            2. nome_variavel- indica o nome pelo qual esse vetor vai ser conhecido.
            3. n° de elementos- valor constante que indica quantos elementos tem o vetor
    */

    int g[20]; // vetor do tipo inteiro chamado de g e com 20 numeros inteiros

    float x[100]; // vetor do tipo real chamado de x e com 100 numeros reais
    /*
     qualquer elemento do vetor pode ser identificado como x ou g(exemplos anteriores), mas para identificar cada um deles individualmente 
     é necessario um numero que indique qual sua posição no vetor, que é o que chamaamos de INDICE. O indice começa pelo 0, então em um vetor com 20 numeros
     o primeiro elementos vai ser o 0, e o ultimo elemento vai ser o 19. Ent vai variar entre 0 e total de elementos-1.

     int vetor[3]
     indice: vetor[0], vetor[1], vetor[2];
    */

    // coloque o valor 123 na primeira posição do vetor
    int vetor[6];
    vetor[0] = 123;

    // coloque na ultima posição do vetor o dobro do valor do primeiro elemento
    vetor[5] = vetor[0] * 2;

    // coloque no terceiro elemento do vetor a soma do primeiro com o ultimo elemento
    vetor[2] = vetor[0] + vetor[5];

    printf("%d %d %d\n", vetor[0], vetor[5], vetor[2]);

    int i = 0;
    int vetor2[6];
    while (i < 6)
    {

        vetor2[i] = i;
        printf("indice[%d]\n", vetor2[i]);
        i = i + 1;
    }

    /*O indice de um elemento pode ser representado por qualquer expressão que devolva um valor inteiro*/

    int vetor3[10];
    vetor3[4 - 2] = 4;           // equivalente a vetor3[2] = 4
    vetor3[1 + vetor3[1]] = 432; // equivalente a vetor3[1+2] = 513

    // É POSSIVEL INICIAR AUTOMATICAMENTE TODOS OS ELEMENTOS DE UM VETOR ATRAVES DA SEGUINTE SINTAXE:
    char vogal[5] = {'a', 'e', 'i', 'o', 'u'};
    // indice =     { 0 ,  1 ,  2 ,  3 ,  4 };
    //  se um vetor com 5 elementos for incializado somente com 2 de carga inicial, os outros 3 serão inicalizados com 0


    //PASSAGEM DE VETORES PARA FUNÇÕES
/*
        //se quiser por exemplo, iniciar um vetor com o valor 0 em todas as posições usando função faremos assim:

        void inic1(int s[10]){
            int i;
            for(i=0; i<10; i++){
                s[i]=0;

            }
        }
agr todos os valores vão iniciar com 0.

Ao colocar um vetor como parametro de uma função não é necessario indicar a quantidade de elementos presentes no vetor
coloca-se uma variavel inteira para indicar qual o numero de elementos. Dessa forma é possivel iniciar um vetor de inteirios de qualquer dimensão
pois não é indicado no parametro da função qual o numero de elementos que o vetor contem.

Nota: se for indicar a dimensão do vetor no parametro da função, o numero de elementos do vetor é simlismente ignorado pelo compilador. 
A função se interessa somente em saber qual o tipo dos elementos do vetor.

        */
}
