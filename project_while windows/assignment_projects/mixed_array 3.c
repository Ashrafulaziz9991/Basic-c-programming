#include <stdio.h>
int prime(int n);
void average(int n, int a[]);
int main()
{
    int n, i, prime_counter = 0, even_counter = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (prime(arr[i]) == 1)
            prime_counter++;
    }
    printf("Prime numbers: %d\n", prime_counter);
    average(n, arr);
    return 0;
}
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
void average(int n, int a[])
{
    //function for find Average value
    int i, sum = 0.00, counter = 0.00;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum += a[i];
            counter++;
        }
    }
    float avg = sum / counter;
    printf("Average of all even integers: %.2f", avg);
    return;
}
