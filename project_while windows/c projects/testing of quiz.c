#include<stdio.h>
int main()
{
    int t;
    printf("Enter the test case no :");
    scanf("%d", &t);
    while(t--)
    {
        int t2;
        printf("Enter the size of array :");
        scanf("%d", &t2);
        printf("\n");
        int elements[t2];
        for (int i=0; i<t2 ;i++)
        {
            printf("Enter the elements of array :");
            scanf("%d", &elements[i]);
        }
        for (int i=0; i<t2 ;i++)
        {
            printf("%d  ", elements[i]);
        }
        printf("\n");
    }
    return 0;
}

