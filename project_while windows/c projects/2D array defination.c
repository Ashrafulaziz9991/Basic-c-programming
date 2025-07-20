#include<stdio.h>
#include<string.h>
int main()
{
    int a[3][3]={

                  {87, 62, 91},
                  {74, 3 , 85},
                  {12, 32, 54}
                };
    printf("%d",a[2][2] + a[0][0] + a[1][2]);

    return 0;
}
