#include<stdio.h>

void swap(int x, int y)
{
    int z;
    z = x;
    x = y;
    y = z;
}

int main()
{
    int arr[5]= {213,10,325,507,100};
    int max=arr[0],i;
    for(i=1; i<5; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d\n",max);

    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    swap(a,b);
    printf("A is %d, B is %d", a, b);
    return 0;
}

