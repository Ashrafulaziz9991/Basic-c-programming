#include<stdio.h>
int main()
{
    int a=9,i,mul;

    for(i=1;i<=10;i++)
    {
        mul=a*i;
        printf("%d X %d = %d\n", a ,i,mul);
    }

//    int b=7;
//
//    for(i=1;i<=10;i++)
//    {
//        mul=b*i;
//        printf("%d X %d = %d\n", b ,i,mul);
//    }
    return 0;
}

