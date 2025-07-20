#include<stdio.h>
int main()
{
    int n, i, k, c=0;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (i = 0; i<n ; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i]>=k && k==1)
        {
            c++;
        }

        else if(arr[i]>k)
        {
            c++;
        }
        else
        {
            //do nothing
        }
    }
    printf("%d", c);
    return 0;
}
