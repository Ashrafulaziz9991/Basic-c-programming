#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int Rows = (2 * N) - 1;
    int midRow = N;

    for (int row = 1; row <= Rows; row++)
    {
        for (int column = 1; column <= (2 * N) - 1; column++)
        {
            if (row <= midRow)
            {
                if (column >= midRow - (row - 1) && column <= midRow + (row - 1))
                {
                    printf("<");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if (column >= row - midRow + 1 && column <= (2 * N) - (row - midRow + 1))
                {
                    printf(">");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
