#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int n;
    scanf("%d", &n);
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a' && s[i]<='z'  ||  s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+=n;
        }
        i++;
    }
    puts(s);
    return 0;
}

