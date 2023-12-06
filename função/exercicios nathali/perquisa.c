#include <stdio.h>
/*
Foi feita uma pesquisa entre os habitantes de uma região. foram coletados os dados de idade, sexo(M/F) e salario. faça um programa que informe:

a) media de salario do grupo;
b) maior e menor idade do grupo;
c) quantidade de mulheres com salario ate RS100,00;

encerre a entrada de dados qunado for digitado uma idade negativa.
*/

float MediaSalarial(float total, int contador);
int MaiorIdade(int idade, int maior);
int MenorIdade(int idade, int menor);
int TotalMulherSal(char sexo, float salario, int totalmulheres);
void Introducao();
int main()
{
    int contador = 0, idade = 0, maiorIdade = 0, menorIdade = 300, qtdMulheres = 0;
    float salario = 0, total = 0, resultadoMedia = 0;
    char sexo;

    Introducao();

    do
    {
        printf("informe sua idade: \n");
        scanf("%d", &idade);
        if (idade < 0)
        {
            break;
        }
        printf("informe seu salario: \n");
        scanf("%f", &salario);
        printf("Informe seu sexo(F/M): \n");
        scanf(" %c", &sexo);

        total = total + salario;

        maiorIdade = MaiorIdade(idade, maiorIdade);
        menorIdade = MenorIdade(idade, menorIdade);
        qtdMulheres = TotalMulherSal(sexo, salario, qtdMulheres);
        contador++;
    } while (idade > 0);

    resultadoMedia = MediaSalarial(total, contador);

    printf("A media salarial da região é: %.2f\n", resultadoMedia);
    printf("A maior idade da região é: %d\nA menor idade da região é: %d\n", maiorIdade, menorIdade);
    printf("A quantidade de mulheres com um salario inferior a R$100,00 é: %d\n", qtdMulheres);

    return 0;
}

float MediaSalarial(float total, int contador)
{
    float media = total / contador;

    return media;
}
int MaiorIdade(int idade, int maior)
{
    if (idade > maior)
    {
        maior = idade;
    }

    return maior;
}
int MenorIdade(int idade, int menor)
{
    if (idade < menor)
    {
        menor = idade;
    }
    return menor;
}
int TotalMulherSal(char sexo, float salario, int totalmulheres)
{
    if (sexo == 'F' || sexo == 'f')
    {
        if (salario <= 100.00)
        {
            totalmulheres++;
        }
    }
    return totalmulheres;
}
void Introducao(){
    printf("\tBem vindo a pesquisa regional\n");
    printf("\tVamos precisar de alguns dados pessoais, como:\n\t\tIdade\n\t\tSalario\n\t\tSexo\n");
    printf("\t\t\tVAMOS COMEÇAR!\n");
}
