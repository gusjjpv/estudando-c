#include <stdio.h>
/*
Desenvolva um programa para comparar a idade de pedro, de joana e de ismael e informar quem é o mais velho. dados de entra:
idade pedro, de joana e de ismael(tipos das variaveis: inteiro, e valor em anos). considere que essas pessoas possuem idades diferentes.
*/

int main()
{
    int pedro_idade, joana_idade, ismael_idade;

    printf("Informe as idades: \n");
    scanf("%d %d %d", &pedro_idade, &joana_idade, &ismael_idade);

    if (pedro_idade > joana_idade)
    {
        if (pedro_idade > ismael_idade)
        {
            printf("Pedro é o mais velho");
        }
    }
    else
    {
        if (joana_idade > ismael_idade)
        {
            printf("joana é a mais velha");
        }
        else
        {
            printf("ismael é o mais velho");
        }
    }
    return 0;
}
