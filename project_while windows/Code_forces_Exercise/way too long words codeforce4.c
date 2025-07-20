#include<stdio.h>
#include<string.h>
int main()
{
    int T,j;
    scanf("%d",&T);
    while(T--)
    {
        char n[100];
        scanf("%s",n);
        char mmm[100];
        int len,d = 0;

        len = strlen(n);
        for ( j = 0; j < len; j++)
        {
            mmm[j] = n[len - j - 1];
        }
        mmm[j] = '\0';

        d=strcmp(n,mmm);
        printf("%d\n", d);
    }
    return 0;
}
