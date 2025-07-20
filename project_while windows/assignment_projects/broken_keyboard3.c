#include<stdio.h>
#include<string.h>
void worn_Out_Keyboard()
{
    char input[100];
    fgets(input, sizeof(input),stdin);
    int i = 0;
    int count = 1;
    while (input[i] != 0)
    {
        for(int j = 0; j < count; j++)
        {
            printf("%c", input[i]);
        }
        count = (count % 2) + 1;
        i++;
    }
    return;
}
int main()
{
    worn_Out_Keyboard();
    return 0;
}


