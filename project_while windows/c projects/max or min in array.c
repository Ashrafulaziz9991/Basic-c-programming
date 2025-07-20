#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int ara[N];
    int i;

    for (i=0;i<N;i++)
    {
        scanf("%d",&ara[i]);
    }
    int m=ara[0], min=ara[0];
    for(i=0;i<N;i++)
    {
        if(m<ara[i])
        {
            m=ara[i];
        }

        if(min>ara[i])
        {
            min=ara[i];
        }
    }

    printf("The maximum value %d\n",m);
    printf("The minimum value %d\n",min);
    return;
}

