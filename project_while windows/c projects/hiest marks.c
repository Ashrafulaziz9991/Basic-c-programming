#include<stdio.h>
int main()
{
    int i,N;
    int Marks[100];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&Marks[i]);
    }
    int max=Marks[0];
    for(i=0;i<N;i++)
    {
        if(Marks[i]>max)
        {
            max = Marks[i];
        }
        else
        {
          //Do nothing.
        }
    }
    int diff=Marks[0];
    for(i=0;i<N;i++)
    {
        diff = max-Marks[i];
        printf("%d ",diff);
    }
    return 0;
}


