#include<stdio.h>

int seven_present(int n);

int main()
{
    int n;
    scanf("%d", &n);
    if(seven_present(n) == 1)
        printf("beauty");
    else
        printf("ugly");
    return 0;
}

int seven_present(int n)
{
    while(n>0)
    {
        if(n % 10 == 7)
            return 1;
        n/=10;
    }
    return 0;
}
