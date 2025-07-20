#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number :\n");
    scanf("%d",&a);
    if(a>100)
    {
        printf("invalid number");
        return;
    }
    if(a<=32)
    {
        printf("you are failed");
        return;

    }
    if(a<=39)
    {
        printf("you got D");
        return;
    }
    if(a<=49)
    {
        printf("you got C");
        return;
    }
    if(a<=59)
    {
        printf("you got B");
        return;
    }
    if(a<=69)
    {
        printf("you got A-");
        return;
    }
    if(a<=79)
    {
        printf("you got A");
        return;
    }

    if(a<=100)
    {
        printf("you got A+");
        return;
    }
    return 0;
}
