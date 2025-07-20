#include <stdio.h>
#include <string.h>

int main()
{
    int T,i,j;
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        char S[100];
        scanf("%s", S);
        char mmm[100];
        int len,d = 0;

        len = strlen(S);
        for (j = 0; j < len; j++)
        {
            mmm[j] = S[len - j - 1];
        }
        mmm[j] = '\0';

        d=strcmp(S,mmm);

        int c=0;
        //printf("Case #%d: ", T - i);
        if(d!=0)
           {
               c=1;
           }
        else
        {
            if(len>7)
            {
                c=2;
            }
            else
            {
                c=3;
            }
        }
        if(d!=0)
        {
            printf("Case #%d: Not palindrome\n",c);
        }


        else
        {
            if (len < 7)
            {
                printf("Case #%d: %s\n",c, mmm);
            }
            else
            {
                printf("Case #%d: %c%d%c\n",c, S[0], len - 2, S[len - 1]);
            }
        }

    }
    return 0;
}
