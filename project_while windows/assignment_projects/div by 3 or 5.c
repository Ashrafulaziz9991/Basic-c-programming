#include<stdio.h>
int div_by_three(int n);

int div_by_five(int n);

int main()
{
    int num, counter = 0;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0 ;i < num ; i++)
    {
        scanf("%d", &arr[i]);
        if(div_by_three(arr[i]) == 1  ||  div_by_five(arr[i]) == 1)
            counter++;
    }
    if(counter>=1)
        printf("\n%d", counter);
    else
    printf("-1");

    return 0;
}
int div_by_three(int n)
{
    if(n % 3 == 0)
        return 1;
    else
        return 0;
}
int div_by_five(int n)
{
    if(n % 5 == 0)
        return 1;
    else
        return 0;
}
