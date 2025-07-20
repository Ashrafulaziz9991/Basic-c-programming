#include<stdio.h>
#include<math.h>
int fact(int n);

int main()
{
    int n, i, perm, m,r;
    printf("Enter 2 integers :");
    scanf("%d %d", &n, &r);
/*    for (i=1 ;i<=n ; i++)
    {
        fact *=i;
    }
*/
    perm = fact(n)/fact(n-r);
    int comb = fact(n)/(fact(n-r)*fact(r));

    m = fact(n);
    printf("facterial is %d \n", m);
    printf("nPr is  %d \n", perm);
    printf("nCr is  %d \n", comb);
    return 0;
}

int fact(int n)
{
    int fact=1;
    for (int i=1 ;i<=n ; i++)
    {
        fact *=i;
    }
    return fact;

}
