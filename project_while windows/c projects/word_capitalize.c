#include<stdio.h>
int main()
{
    char c[1220];
    fgets(c,sizeof(c),stdin);
    if(c[0]>='a' && c[0]<='z')
        {
            c[0]-=32;
        }
    printf("%s",c);

    return 0;
}
