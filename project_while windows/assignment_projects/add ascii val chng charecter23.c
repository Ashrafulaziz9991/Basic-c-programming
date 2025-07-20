#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int n;
    scanf("%d", &n);
    int i;
    for (i=0 ;s[i]!='\0'; i++)
    {
        if(s[i]>='a' && s[i]<='z'  ||  s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+=n;
        }
        if(s[i]>='z')
        {
            s[i]=95+n;
        }
    }
    s[i]='\0';
    puts(s);
    return 0;
}


