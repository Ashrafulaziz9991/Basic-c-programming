#include<stdio.h>
void wornOutKeyboard(char *input)
{
    int i = 0;
    int count = 1;
    while (input[i] != '\0')
    {
        for (int j = 0; j < count; j++)
        {
            printf("%c", input[i]);
        }
        count = (count % 2) + 1;  // Alternate between 1 and 2
        i++;
    }
}
int main()
{
    char input[100];
    printf("Enter the input string: ");
    scanf("%s", input);
    wornOutKeyboard(input);
    return 0;
}

