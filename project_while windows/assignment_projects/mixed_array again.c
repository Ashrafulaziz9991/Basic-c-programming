#include<stdio.h>
int prime(int n)
{
    //function for detect prime number
    int i;
    if (n == 1 || n == 0)
        return 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n, i, prime_counter = 0, sum = 0, even_counter = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (prime(arr[i]) == 1)
            prime_counter++;
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
            even_counter++;
        }
    }
    int avg = sum/even_counter;
    printf("Prime numbers: %d\n", prime_counter);
    printf("Average: %d\n", avg);
    return 0;
}
