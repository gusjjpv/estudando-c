#include <stdio.h>

int main()
{

    char estCivil;
    float salario, taxa;
    printf("informa seu genero:\nFeminino: F\nMasculino: M\n");
    scanf(" %c", &estCivil);
    printf("informe seu salario: \n");
    scanf("%f", &salario);

    switch (estCivil)
    {
    case 'f':
    case 'F':
        taxa = salario * 0.10;
        printf("imposto: %.2f", taxa);
        break;
    case 'm':
    case 'M':
        taxa = salario * 0.15;
        printf("imposto: %.2f", taxa);
    default:
        printf("genero invalido\n");
    }

    return 0;
}