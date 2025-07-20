#include<stdio.h>
int main()
{
    int r , c , i, j;
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    int transpose_matrix[r][c];
    for (i = 0 ; i<r ; i++)
    {
        for (j = 0; j < c ; j++)
        {
            printf("matrix[%d][%d] = ",i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    printf("Here is the matrix : \n");

    for (i = 0 ; i<r ; i++)
    {
        for (j = 0; j < c ; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0 ; i<r ; i++)
    {
        for (j = 0; j < c ; j++)
        {
            transpose_matrix[j][i] = matrix[i][j];
        }
    }

    printf("Here is the transpose matrix : \n");

    for (i = 0 ; i<r ; i++)
    {
        for (j = 0; j < c ; j++)
        {
           printf("%d ",transpose_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
