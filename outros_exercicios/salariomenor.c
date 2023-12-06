#include <stdio.h>

int main()
{
    float salario;

    printf("informe seu salario: \n");
    scanf("%f", &salario);

    if (salario < 100000.00)
    {
        salario = salario + 1000.00;
        printf("agora seu salario é %f", salario);

    }

    return 0;
}