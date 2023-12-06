#include <stdio.h>

int main()
{
    // matriz de 3 linhas e 3 colunas
    int mat[3][3];
    int i, j;
    int velha[3][3] = {1, 2, 3};

    int m[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    for(i = 0;i<3;i++){
        for(j = 0; j<3;j++){
            printf("%d", m[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c", velha[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("%d", mat[0][1]);
    return 0;
}