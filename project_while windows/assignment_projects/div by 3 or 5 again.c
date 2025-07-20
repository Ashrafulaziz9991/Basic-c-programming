#include<stdio.h>
int main()
{
    int num, counter = 0;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0 ;i < num ; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]%5 == 0  ||  arr[i]%3 == 0)
            counter++;
    }
    printf("%d", counter);
}
