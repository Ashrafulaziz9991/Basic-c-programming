#include<stdio.h>
int main()
{
    int n, i, add = 0, sum =0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n ; i++)
    {
        scanf("%d", &arr[i]);
        add =(arr[i]/1000 + arr[i]%10);
        sum = sum += add;
    }

    printf("%d", sum);

    return 0;
}
