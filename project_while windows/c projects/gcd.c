#include<stdio.h>
int main()
{
    int a,b,n1,n2,rem,gcd,lcm;
    scanf("%d%d",&a,&b);

    n1=a;
    n2=b;

    while(n2!=0)
    {
        rem = n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    printf(" The GCD of %d and %d is %d",a,b,gcd);
    return 0;
}

