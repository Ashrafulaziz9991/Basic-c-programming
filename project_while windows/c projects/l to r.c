#include<stdio.h>

int main()
{
    int T, sum, i;
    scanf("%d",&T);
    while(T--)
    {
        int L, R;
        scanf("%d %d", &L,&R);
        sum = 0;
        for (i = L; i<=R ; i++)
        {
            sum += i;
        }
        printf("%d \n",sum);

    }
    return 0;
}
