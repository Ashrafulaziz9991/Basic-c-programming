#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, mul=1;
    scanf("%d",&n);
    for (i=1 ; i<=10 ;i++)
    {
        n = n*=i;
        printf("%d \n", n);
        //printf("\n");
    }
    return 0;
}
