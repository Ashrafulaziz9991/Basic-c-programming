#include<stdio.h>
int f= 10-5;/*'f' & 'g' both are global variable, they are common in every global function*/
int g= 15;
void solve()
{
    int a, b;
    printf("Enter the numbers :");
    scanf("%d %d", &a, &b);
    printf("Answer is %d \n",a+b+g);
}

int main()
{
    int t;
//    scanf("%d",&t);
    while(f--)
        solve();
    return 0;
}
