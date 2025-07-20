#include<stdio.h>

int main()
{
    int i, j, m, n;
    scanf("%d %d", &n, &m); // taking input for row & column number
    int matrix[n][m]; // declaring the matrix with correct size

    // taking the input of the matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (matrix[i][j] == i + 1 && matrix[i][j] == j + 1)
            {
                matrix[i][j] += 3;
            }
            else if (matrix[i][j] == i + 1)
            {
                matrix[i][j] += 2;
            }
            else if (matrix[i][j] == j + 1)
            {
                matrix[i][j] += 1;
            }
        }
    }

    // Now ready to print the modified matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
