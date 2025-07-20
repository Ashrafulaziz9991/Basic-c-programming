#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int m;
    char ave[105];
    fgets(ave,sizeof(ave),stdin);
    int i = 0;
    while(ave[i]!='\0')
    {
        if(ave[i] == ave[i+1])
        {
          m = ave[i];
          m++;
        }
        i++;
    }
    printf("%d");
    return 0;
}
