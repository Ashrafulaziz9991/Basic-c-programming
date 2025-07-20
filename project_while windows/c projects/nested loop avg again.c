#include<stdio.h>
int main()
{
    int i,j; float x,summ, average;
    for(i=1;i<=15;i++)
    {
        printf("Enter marks of %dth student",i);
        summ = 0.0;
        for(j=1;j<=3;j++)
        {
          scanf("%f",&x);
          summ+=x;
        }
        average=summ/3;
        printf("Average=%f\n",average);
    }

    return 0;
}

