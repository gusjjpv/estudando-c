#include <stdio.h>

int main()
{
    int i, num, pesototal;
    float media, imc, altura, peso;
    char escolha;


    //aqui pedi ao usuario para escolher a opção que ele quer saber.
    printf("Para saber o peso medio de uma regiao digite: M\nPara saber o IMC digite: I\n");
    scanf("%c", &escolha);

//estrutura principal do codigo, atravez da estrutura de decisao, o codigo ira para onde o usuario escolheu

//primeira opção é de saber o peso medio de uma região
    if (escolha == 'M')
    {
        //peço a quantidade pesos ele quer a media
        printf("Informe a media de peso que vc quer saber: ");
        scanf("%d", &num);
//estrutura de repetição para fazer a media
        for (i = 1; i <= num; i++)
        {
            printf("ola, informe seu peso: \n");
            scanf("%f", &peso);

            printf("Obrigado, proximo\n");
            pesototal = pesototal + peso;
        }

        //a media é dividida exatamente pelo numero que o usuario informou
        media = pesototal / num;
        printf("o peso medio do grupo e %.2f", media);
    }
    //
    else if (escolha == 'I')
    {

        // Solicitar o peso e a altura ao usuário
        printf("Digite o peso (em kg): ");
        scanf("%f", &peso);

        printf("Digite a altura (em metros): ");
        scanf("%f", &altura);

        // Calcular o IMC
        imc = peso / (altura * altura);

        // Exibir o resultado
        printf("O IMC é: %.2f\n", imc);

        // Interpretar o resultado
        if (imc < 18.5)
        {
            printf("Abaixo do peso\n");
        }
        else if (imc < 25)
        {
            printf("Peso normal\n");
        }
        else if (imc < 30)
        {
            printf("Sobrepeso\n");
        }
        else
        {
            printf("Obesidade\n");
        }
    }
    return 0;
}