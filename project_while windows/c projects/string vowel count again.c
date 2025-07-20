#include<stdio.h>
#include<string.h>
int main()
{
    char sen[1000];
    fgets(sen,sizeof(sen),stdin);
    //printf("%s",sen);
    //for(int i=0;i<=sen[];)
    int i,counter=0;
    while(sen[i]!='\0')
    {
        //if vowel found then use counter
         if(sen[i]=='a' || sen[i]=='A')
            counter++;
         if(sen[i]=='e' || sen[i]=='E')
            counter++;
         if(sen[i]=='i' || sen[i]=='I')
            counter++;
         if(sen[i]=='o' || sen[i]=='O')
            counter++;
         if(sen[i]=='u' || sen[i]=='U')
            counter++;
         i++;
    }

    printf("total vowel count %d",counter);
    //puts(sen);

    return 0;
}

