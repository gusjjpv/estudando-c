#include <stdio.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");


    int num;
    
    printf("Informe um n�mero inteiro: ");
    scanf("%d", &num);
    if(num == 0){
        printf("%d � igual a zero", num);
    } else {
        printf("%d n�o � igual a zero", num);
    }

    return 0;
}