#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    int arr[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++)
    {
        printf("%d \n", arr[i]);
    }
    return 0;
}
