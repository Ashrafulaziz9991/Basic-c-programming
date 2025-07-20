#include<stdio.h>
int main()
{
    int T, X;
    scanf("%d", &T);
    int t1=0,t2=0,t3=0;

    while(T--)
    {
        scanf("%d%%", &X);
        t1=60-X;
        t2=2*(80-X);
        t3=3*(100-X);
        if (X < 60)
        {
            printf("%d minutes\n",(t1+100));
        }
        else if (X < 80)
        {
            printf("%d minutes\n", (t2+60));
        }
        else
        {
            printf("%d minutes\n", t3);
        }
    }
    return 0;
}

