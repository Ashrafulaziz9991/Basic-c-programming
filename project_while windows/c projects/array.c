#include<stdio.h>
int main()
{
    int array[10];
    array[0]=3200;
    array[1]=200;
    array[2]= array[0]-array[1];
    printf("%d",array[2]);
    return 0;
}
