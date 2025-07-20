#include<stdio.h>

int any_digit_O(int n);
int any_digit_S(int n);
int any_digit_N(int n);

int main()
{
    long long int n;
    scanf("%lld", &n);
    if (any_digit_O(n) == 1  &&  any_digit_S(n) == 1  && any_digit_N(n) == 1)
    {
        printf("yes\n");
    }
    else
    {
        printf("No");
    }

    return 0;
}

int any_digit_O(int n)
{
    while(n>0)
    {
        if(n%10 == 1 )
            return 1;
        n/=10;

    }
    return 0;
}

int any_digit_S(int n)
{
    while(n>0)
    {
        if(n%10 == 7 )
            return 1;
        n/=10;

    }
    return 0;
}
int any_digit_N(int n)
{
    while(n>0)
    {
        if(n%10 == 9 )
            return 1;
        n/=10;

    }
    return 0;
}
