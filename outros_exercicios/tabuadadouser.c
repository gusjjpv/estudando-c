#include <stdio.h>

int main(){
    int numUser, cont = 0;

    printf("Informe um numero: ");
    scanf("%d", &numUser);

    while(cont <=10){
        printf("%2d * %2d = %d\n", numUser, cont, numUser * cont);

        cont++;
    }
    
    return 0;

}