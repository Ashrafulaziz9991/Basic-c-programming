#include<stdio.h>
int main ()
{
    printf("Please Enter a number :");
    int x;
    scanf("%d",&x);
    if(x%2 == 0){
        printf("this number is Even number \n");
    }
    else{
        printf("this number is odd \n");
    }
    return 0;
}
