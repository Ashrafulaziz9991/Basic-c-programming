#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m); // read the dimensions of the matrix
    int matrix[n][m];

    // read the elements of the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // do the required operation on each element of the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == i + 1 && matrix[i][j] == j + 1)
            {
                matrix[i][j] += 3; // if the value matches both row and column numbers, add 3
            }
            else if (matrix[i][j] == i + 1)
            {
                matrix[i][j] += 2; // if the value matches only the row number, add 2
            }
            else if (matrix[i][j] == j + 1)
            {
                matrix[i][j] += 1; // if the value matches only the column number, add 1
            }
        }
    }

    // print the modified matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

