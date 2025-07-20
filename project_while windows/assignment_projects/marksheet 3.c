#include<stdio.h>

void grade(int a);

int main()
{
    int a;
    scanf("%d",&a);
    grade(a);
    return 0;
}

void grade(int a)
{

    if(a>100 || a<0)
    {
        printf("invalid number");
        return;
    }
    if(a<=39)
    {
        printf("F");
        return;
    }
    if(a<=59)
    {
        printf("C");
        return;
    }
    if(a<=79)
    {
        printf("B");
        return;
    }

    if(a<=100)
    {
        printf("A");
        return;
    }

    return;
}

