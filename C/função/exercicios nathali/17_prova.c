#include <stdio.h>
/*
Deseja-se publicar o número de acertos de cada aluno em uma prova em forma
de testes. A prova consta de 30 questões, cada uma com cinco alternativas
identificadas por A, B, C, D e E. Para isso são dados:
 cartão gabarito;
 número de alunos da turma;
 cartão de respostas para cada aluno, contendo o seu número e suas respostas
*/

int main()
{

    char gabarito[11], respostasAlunos[11]; // cartão gabarito(indice 1 ate 10)
    int numAlunos;                          // numeros de alunos na turma
    int i, j, acertos;

    // leitura do gabarito
    printf("informe as respostas corretas(10 caracteres, por exemplo, ABACCD...):\n");
    scanf("%s", gabarito);

    // leitura do numero de alunos
    printf("informe o numeor de alunos na turma: \n");
    scanf("%d", &numAlunos);

    // processamento das respostas dos alunos
    for (i = 1; i <= numAlunos; i++)
    {
        acertos = 0;//coloca no inicio do for para zerar os acertos quando repetir o loop.
        printf("informe as respostas do aluno %d(10 caracteres, por exemplo, ABACCD...):\n", i);
        scanf("%s", respostasAlunos);

        //verifica as respostas e calcula o numero de acertos
        for(j=0;j<10;j++){
            if(gabarito[j] == respostasAlunos[j]){
                acertos++;
            }
        }

        //Mostra o numero de acertos do aluno
        printf("Aluno %d: %d acertos\n", i,acertos);

    }

    return 0;
}