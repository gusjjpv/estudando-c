#include <stdio.h>

int main()
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num >= 0){
        printf("%d é positivo\n", num);
    } else {
        printf("%d é negativo\n", num);
    }

    return 0;
}