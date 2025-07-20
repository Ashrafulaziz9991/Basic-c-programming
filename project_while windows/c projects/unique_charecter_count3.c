#include <stdio.h>
#include <stdbool.h>

int countUniqueCharacters(const char *str)
{
    bool seen[128] = { false };  // Assuming ASCII characters

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!seen[(int)str[i]])
        {
            seen[(int)str[i]] = true;
            count++;
        }
    }
    return count;
}

int main()
{
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character from fgets
    for (int i = 0; input[i] != '\0'; ++i)
    {
        if (input[i] == '\n')
        {
            input[i] = '\0';
            break;
        }
    }

    int uniqueCount = countUniqueCharacters(input);
    printf("Number of unique characters: %d\n", uniqueCount);

    return 0;
}

