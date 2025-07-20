#include<stdio.h>
int main()
{
    int N, M, i, j;
    scanf("%d %d", &N, &M);
    printf("Enter Matrix_1 input :\n");
    int matrix[N][M];
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Enter Matrix_2 input :\n");
    int matrix_2[N][M];
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            scanf("%d", &matrix_2[i][j]);
        }
    }

    printf("The Addition of two matrix is:\n");

    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            printf("%d ",matrix[i][j]+matrix_2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
