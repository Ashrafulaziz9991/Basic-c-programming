#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        char name[100];
        fgets(name,sizeof(name),stdin);
        char mmm[100];
        int len,d;

        len = strlen(name);
        for (j = 0; j < len; j++)
        {
            mmm[j] = name[len - j - 1];
        }
        mmm[j] = '\0';

        printf("%s ",mmm);

        //d=strcmp(name,mmm);
        //printf("\n%d",d);
    }
    return 0;
}
