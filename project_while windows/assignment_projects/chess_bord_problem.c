#include <stdio.h>
#define N 3 // Define the size of the matrix
// Function to check whether the given matrix is a magic square or not
int isMagicSquare(int square[][N]) {
    int i, j, sum = 0;

    // Calculate the sum of the first row and use it as a reference
    for (i = 0; i < N; i++)
        sum += square[0][i];

    // Check if the sum of all other rows, columns and diagonals is equal to the reference sum
    // Check rows
    for (i = 1; i < N; i++) {
        int row_sum = 0;
        for (j = 0; j < N; j++)
            row_sum += square[i][j];
        if (row_sum != sum)
            return 0;
    }

    // Check columns
    for (i = 0; i < N; i++) {
        int col_sum = 0;
        for (j = 0; j < N; j++)
            col_sum += square[j][i];
        if (col_sum != sum)
            return 0;
    }

    // Check diagonal from top-left to bottom-right
    int diag_sum = 0;
    for (i = 0; i < N; i++)
        diag_sum += square[i][i];
    if (diag_sum != sum)
        return 0;

    // Check diagonal from top-right to bottom-left
    diag_sum = 0;
    for (i = 0, j = N - 1; i < N && j >= 0; i++, j--)
        diag_sum += square[i][j];
    if (diag_sum != sum)
        return 0;

    // If all checks passed, the matrix is a magic square
    return 1;
}

int main()
{
    int square[N][N];
    int i, j;

    // Read the matrix from user input
    printf("Enter a 3x3 matrix:\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &square[i][j]);

    // Check if the matrix is a magic square
    if (isMagicSquare(square))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

