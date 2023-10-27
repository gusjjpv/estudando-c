#include <stdio.h>

int main()
{
    int i, peso, pesototal;
    float media;
    
    for (i = 1; i <= 10; i++)
    {
        printf("ola, informe seu peso: ");
        scanf("%d", &peso);

        printf("Obrigado, proximo");
        pesototal = pesototal + peso;
    }
    media = pesototal / 10;
    printf("o peso medio do grupo e %f", media);
}