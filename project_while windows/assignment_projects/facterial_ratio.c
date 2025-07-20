#include<stdio.h>
int fact(int n)
{
    int i, fact = 1;
    for ( i=1 ;i<=n ;i++)
    {
        fact = fact*=i;
    }
    return fact;
}
/*void factratio(int a, int b)
{
    double ratio = fact(a)/fact(b);
    printf("%.3ld",ratio);
    return;
}
*/
int main()
{
    int a = 5, b = 3;
    //ratio(a,b);
    int r = fact(a)/fact(b);
    printf("%d", r);
    return 0;
}
