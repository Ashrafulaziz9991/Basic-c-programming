#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter 3 inputs:\n");
    scanf("%d%d%d", &a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is a large number", a);
    }
    else
        if(a==b && b==c)
        {
        printf(" They are equal number");
        }
        else
            if(b>a && b>c)
        {
            printf("%d is a large number",b);
        }
            else
            {
                printf("%d is a large number", c);
            }

    return 0;
}
