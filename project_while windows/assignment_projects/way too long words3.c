#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    char word[600];
    for(int i=0; i<n ; i++)
    {
        //fgets(word,sizeof(word),stdin);
        scanf("%s", word);
        int L = strlen(word);

        if(L>10)
        {
            printf("%c%d%c\n",word[0],L-2,word[L-1]);
        }
        else
        {
            puts(word);
        }

    }
    return 0;
}
