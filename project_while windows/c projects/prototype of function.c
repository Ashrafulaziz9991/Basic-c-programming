#include<stdio.h>
int big_among_three(int x, int y, int z);

//int mysum(int x, int y;

int main()

{
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
//    int result = mysum(a,b);
    int result2 = big_among_three(a, b, c);
//    printf("%d", result);
    printf("\nBig Number is %d", result2);
    return 0;
}

int big_among_three(int x, int y, int z)
{
    if(x>y && x>z)
        return (x);

    if(y>x && y>z)
        return (y);

    if(z>x && z>y)
        return (z);


}

/*int mysum(int x, int y)
{
    printf("sum is : ");
    return (x+y);

}
*/
