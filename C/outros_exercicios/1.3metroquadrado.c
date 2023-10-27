#include <stdio.h>
#include <locale.h>
int main()
{   
     setlocale(LC_ALL, "Portuguese_Brazil");
    float area, largura, comprimento;
    // sempre colocar o & antes da variavel.
    scanf("%f %f", &largura, &comprimento);

    area = largura * comprimento;

    printf("a area em metros quadrados é: %.1f", area);

    return 0;
}