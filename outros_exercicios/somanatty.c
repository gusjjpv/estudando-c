#include <stdio.h>

int main()
{

    int n, cont, soma;
    printf("Informe um numero: \n");
    scanf("%d", &n);

    for (cont = 1, soma = 0; cont<=n;cont= cont + 1){
        soma = soma + cont;

        printf("%d\n", soma);
    }

        return 0;
}