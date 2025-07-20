#include<stdio.h>
int main()
{
    int N,i,K;
    int Run[100];
    printf("Enter the in integers:\n");
    scanf("%d %d",&N,&K);
    for(i=0;i<N;i++)
    {
        scanf("%d",&Run[i]);
    }
    int out_player_count=0;
    for(i=0;i<N;i++)
    {
        if(Run[i]<K)
        {
            out_player_count++;
        }
        else
        {
           //do nothing.
        }
    }
    printf("%d\n",out_player_count);
    return 0;
}
