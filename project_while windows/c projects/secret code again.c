#include<stdio.h>
int main()
{
    int T,i,count=0,N[100000];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N[i]);
    }
    for(i=1;i<=T;i++)
    {
//       if(N[i]==0 || N[i]==1)
//         {
//           printf("no");
//           return;
//         }

        for(int j=2; j<N[i]; j++)
        {
            if(N[i]%j==0)
            {
                count++;
                break;
            }
        }

        if(count==0)
            {
              printf("Yes\n");
            }
         else
            {
               printf("No\n");
            }
    }


    return 0;
}


