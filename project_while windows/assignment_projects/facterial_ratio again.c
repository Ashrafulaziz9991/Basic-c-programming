#include<stdio.h>
int fact(int n);
double factratio(int a, int b);
int main()
{
    int a , b;
    scanf("%d %d", &a, &b);
    double result = factratio(a, b);
    printf("The factorial ratio of %d and %d is: %.3lf\n", a, b, result);
    return 0;
}
int fact(int n)
{
    int i, fact = 1;
    for (i = 1 ; i<=n ; i++)
    {
        fact= fact*=i;
    }
    return fact;
}
double factratio(int a, int b)
{
    double ratio = fact(a) / fact(b);
    return ratio;
}

