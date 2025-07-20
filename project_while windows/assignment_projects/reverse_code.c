#include<stdio.h>
int main()
{
    int  i;
    char arr[25];
    for(i = 0; arr[i]!='\0' ;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; arr[i]!='\0' ;i++)
    {
        printf("%c", arr[i]+64);
    }
    return 0;
}
