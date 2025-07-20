#include<stdio.h>
int main ()
{
    int a , b , c;
    printf("please Enter a number :");

    scanf("%d %d %d", &a,&b,&c);

    if(a>b && a>c){
        printf("A is larger number then B and C\n");
    }
    if(b>a && b>c){
         printf("B is larger number then A and C\n");
    }
    if(c>b && c>a){
         printf("C is larger number then A and C\n");
    }
return 0;
}
