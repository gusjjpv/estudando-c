#include <stdio.h>
/*
Dado um numero, crie um programa em c que escreva todos os numeros impares menores que esse numero e maiores doque um. assuma que o numero imformado é positivo.
*/

int main()
{

    int num, impar, i = 2;
    printf("informe um numero: \n");
    scanf("%d", &num);
    if (num > 0)
    {
        while (i < num)
        {
            if (i % 2 == 1)
            {
                printf("%d\n", i);
            }

            i++;
        }
    }
    return 0;
}