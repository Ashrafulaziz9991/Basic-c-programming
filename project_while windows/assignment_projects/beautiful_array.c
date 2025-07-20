#include<stdio.h>

int seven_present(int n);

int main()
{
    int n, i, beauty_count = 0, ugly_count = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);

        if(seven_present(arr[i]) == 1)
            beauty_count++;
        else
            ugly_count++;
    }
    if(beauty_count >= ugly_count)
        printf("Beautiful\n");
    else
        printf("Ugly");
    return 0;
}

int seven_present(int n)
{
    while(n>0)
    {
        if(n % 10 == 7)
            return 1;
        n/=10;
    }
    return 0;
}
