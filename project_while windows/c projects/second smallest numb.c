#include<stdio.h>
int main()
{
     int a,i,j,temp,k;
     scanf("%d",&a);
     int input[a];
     for(i=0; i<a; i++)
     {
         scanf("%d",&input[i]);
     }
     scanf("%d",&k);
     for(i=0; i<a; i++)
     {
         for(j=0; j<a; j++)
         {
             if(input[i]>input[j])
             {
                 temp=input[i];
                 input[i]=input[j];
                 input[j]=temp;

             }
         }

     }
    for(i=0;i<a;i++)
    {
        printf("%d ",input[i]);
    }

//         printf("\n %d",input[k-1]);



    return 0;
}
