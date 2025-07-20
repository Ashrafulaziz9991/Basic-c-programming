#include<stdio.h>
int main()
{
    int r , c , i, j;
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    for (i = 0 ;i<r ; i++)
    {
        for (j = 0; j < c ; j++)
        {
            printf("matrix[%d][%d] = ",i, j);
            scanf("%d", &matrix[i][j]);
            //printf("\n");
        }
        printf("\n");
    }
//matrix

    printf("matrix :\n");
    for (i = 0 ;i<r ; i++)
    {
        for (j = 0; j < c ; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
//transpose form
    printf("transpose form matrix :\n");
    for (i = 0 ;i<r ; i++)
    {
        for (j = 0; j < c ; j++)
        {
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}

