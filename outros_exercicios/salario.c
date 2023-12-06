#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float salario;

    printf("Informe seu salario: ");

    scanf("%f", &salario);

    if(salario < 1000) {
        salario = salario + 1000;
        printf("Seu salario agora é %f", salario);
    }

    return 0;
}