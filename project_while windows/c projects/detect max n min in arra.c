#include<stdio.h>
int main()
{
    int i,n=9;
    int ara[n];
    printf("Enter the integers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int max=ara[0];
    int min=ara[0];
    for(i=0;i<n;i++)
    {
        if(ara[i]>max)
        {
            max = ara[i];
        }
        else
        {
          //Do nothing.
        }
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]<min)
        {
            min = ara[i];
        }
        else
        {
          //Do nothing.
        }
    }
    //at first we detect maximum and minimum value.
    //We are also counting here even and odd numbers.

    int Even_counter=0;
    int Odd_counter=0;
    for(i=0;i<n;i++)
    {
        if(ara[i]%2==0)
        {
            Even_counter++;
        }
        else
        {
            Odd_counter++;
        }
    }

     printf("The maximum value is %d\n",max);
     printf("The minimum value is %d\n",min);
     printf("Total Even number is %d\n",Even_counter);
     printf("Total Odd number is %d\n",Odd_counter);
    return 0;
}

