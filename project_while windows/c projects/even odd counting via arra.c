#include<stdio.h>
int main()
{
    int N,i;
    int ara[110];
    printf("Enter the in integers:\n");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&ara[i]);
    }
    int even_cont=0;
    int odd_cont=0;
    for(i=0;i<N;i++)
    {
        if(ara[i]%2==0)
        {
            even_cont++;
        }
        else
        {
            odd_cont++;
        }
    }
    printf("Total Even counter = %d\n",even_cont);
    printf("Total Odd counter = %d",odd_cont);
    return 0;
}
