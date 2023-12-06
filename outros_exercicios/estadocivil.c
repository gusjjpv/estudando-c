#include <stdio.h>

int main()
{

    char estCivil;

    printf("informe seu estado civil:\nSolteiro: S\nCasado: C\nDivorciado: D\nViuvo: V\n");
    scanf("%c", &estCivil);

    if (estCivil == 'S' || estCivil == 's')
    {
        printf("Solteiro");
    }
    else
    {
        if (estCivil == 'C' || estCivil == 'c')
        {
            printf("Casado");
        }
        else
        {
            if (estCivil == 'D' || estCivil == 'd')
            {
                printf("Divorciado");
            }
            else
            {
                if (estCivil == 'V' || estCivil == 'v')
                {
                    printf("viuvo");
                }
            }
        }
    }

    return 0;
}