#include<stdio.h>
int prime(int n)
{
    int i;
    if(n==1 || n==0)
        return 0;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int average(int n, int a[])
{
    int i, sum = 0, counter = 0;
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
           sum = sum+=a[i];
           counter++;
       }
    }
    int avg = sum/counter;

    return avg;
}

int main()
{
    int n, i, prime_counter = 0, average_even = 0;
    scanf("%d",&n);
    int arr[n];
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(prime(arr[i]) == 1)
            prime_counter++;

        average_even = average(n,arr);
    }

    printf("%d\n", prime_counter);
    printf("%d\n", average_even;

    return 0;
}
