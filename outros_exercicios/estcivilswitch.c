#include <stdio.h>

int main() {

    char estCivil;
    printf("informe seu estado civil:\nSolteiro: S\nCasado: C\nDivorciado: D\nViuvo: V\n");
    scanf(" %c", &estCivil);

    switch(estCivil){
        case 'S': printf("solteiro\n");
        case 'C': printf("casado\n");
        case 'D': printf("divorciado\n");
        case 'V': printf("viuvo\n");
        default: printf("estado civil incorreto\n");
    }

    return 0;
}