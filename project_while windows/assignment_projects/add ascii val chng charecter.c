#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    fgets(s,sizeof(s),stdin);
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]-=32;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
        }
        i++;
    }
    //printf("%d", s);
    puts(s);
    return 0;
}
