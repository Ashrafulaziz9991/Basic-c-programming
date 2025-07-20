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
         if(sen[i]=='a')
            counter++;
         if(sen[i]=='e')
            counter++;
         if(sen[i]=='i')
            counter++;
         if(sen[i]=='o')
            counter++;
         if(sen[i]=='u')
            counter++;
         i++;
    }

    printf("total vowel count %d",counter);
    //puts(sen);

    return 0;
}
