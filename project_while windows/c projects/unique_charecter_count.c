#include<stdio.h>
#include<string.h>
int count_unique_char(char* str)
{
    int hash[128] = { 0 };
    int i, c = 0;
    for (i = 0; i < strlen(str); ++i)
    {
        hash[str[i]] = 1;
    }
    for (i = 0; i < 128; ++i)
    {
        c += hash[i];
    }
    return c;
}

int main()
{
    char str[300];
    printf("Enter String: ");
    gets(str);
    printf("Number of Unique Characters in String: %d", count_unique_char(str));
    return 0;
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i = 0, e, j, d, k, space = 0;
    char a[50], b[15][20], c[15][20];

    printf("Read a string:\n");
    fflush(stdin);
    scanf("%[^\n]s", a);
    for (i = 0;a[i] != '\0';i++)        //loop to count no of words
    {
        if (a[i] =  = ' ')
            space++;
    }
    i = 0;
    for (j = 0;j<(space + 1);i++, j++)    //loop to store each word into an 2D array
    {
        k = 0;
        while (a[i] != '\0')
        {
            if (a[i] == ' ')
            {
                break;
            }
            else
            {
                b[j][k++] = a[i];
                i++;
            }
        }
        b[j][k] = '\0';
    }
    i = 0;
    strcpy(c[i], b[i]);
    for (e = 1;e <= j;e++)        //loop to check whether the string is already present in the 2D array or not
    {
        for (d = 0;d <= i;d++)
        {
            if (strcmp(c[i], b[e]) == 0)
                break;
            else
            {
                i++;
                strcpy(c[i], b[e]);
                break;
            }
        }
    }
    printf("\nNumber of unique words in %s are:%d", a, i);
    return 0;
}
*/
