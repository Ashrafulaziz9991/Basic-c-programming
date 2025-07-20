#include<stdio.h>
int main()
{
    int a=12, b=13;
    int c;
    c=b+3;
    int *p, *q;
    p= &a;
    *p=c;
    q=&b;
    *q=a;
    printf("%d",a);
    printf("\n%d",b);
    return 0;
}
