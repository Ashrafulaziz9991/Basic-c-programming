#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[100];
    fgets(s,sizeof(s),stdin);
    int len = strlen(s);
    printf("%d",len-1);
    return 0;
}
