#include <stdio.h>

int main()
{

    float salario, impostoDez = 0.10, impostoCinco = 0.05;

    printf("Informe seu salario: ");
    scanf("%f", &salario);

    if (salario > 0)
    {
        if (salario > 1000)
        {
            salario = salario * impostoDez;
            printf("o imposto a pagar é de 10%%, %.2f\n", salario);
        }
        else
        {
            salario = salario * impostoCinco;
            printf("o imposto a pagar é de 5%%, %.2f\n", salario);
        }
    }
    else
    {
        printf("seu salario n é valido, insira um salario valido\n");
    }

    return 0;
}