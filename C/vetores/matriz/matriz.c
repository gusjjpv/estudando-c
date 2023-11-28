#include <stdio.h>

int main()
{

    int mat[3][3];
    int i, j;

    char velha[3][3] = {',',',',',',',',',',',',',',',',',',','};
    
    for(i = 0;i<3;i++){
        for(j = 0; j < 3; j++){
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
    return 0;
}