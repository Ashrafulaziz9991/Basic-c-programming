#include<stdio.h>
#include<string.h>
int main()
{
    char name[1000];
    fgets(name,sizeof(name),stdin);
    int i, j, len;
    len = strlen(name);

    for (i=0;i<len ;i++)
    {
        for (j=0;j<i;j++)
        {
            printf("%c",name[j]);
        }
        printf("\n");
    }
    //printf("%d", len);
    //puts(name);
    return 0;
}
