#include <stdio.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");


    int num;
    
    printf("Informe um número inteiro: ");
    scanf("%d", &num);
    if(num == 0){
        printf("%d é igual a zero", num);
    } else {
        printf("%d não é igual a zero", num);
    }

    return 0;
}