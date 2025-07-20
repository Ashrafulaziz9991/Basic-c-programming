#include <stdio.h>
void convertToAlphabets(int number)
{
    char alphabet[] = "ABCDEFGHI";

    while (number > 0)
    {
        int digit = number % 10;
        printf("%c", alphabet[digit - 1]);
        number /= 10;
    }
    printf("\n");
}

int main()
{
    int T, number;

    // Input the number of test cases
    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        // Input the number for each test case
        printf("Enter the number for test case %d: ", i + 1);
        scanf("%d", &number);

        // Call the function to convert the number to alphabets
        convertToAlphabets(number);
    }

    return 0;
}

