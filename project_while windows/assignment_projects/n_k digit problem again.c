#include<stdio.h>
int main()
{
    int n, k, i;
    scanf("%d %d", &n, &k);
    int serial[n];
    int index_num = 0;

    //for even numbers
    for (i = 2; i<=n ; i+=2)
    {
        serial[index_num] = i;
        index_num++;
    }

    //for odd numbers
    for (i = 1; i<=n ; i+=2)
    {
        serial[index_num] = i;
        index_num++;
    }


    //total elements of array
    for (i = 0; i<n ; i++)
    {
        serial[i];
        printf("%d ", serial[i]);
    }

    printf("\n");

    printf("The %dth element in this sequence is %d", k,  serial[k-1]);

    return 0;
}
