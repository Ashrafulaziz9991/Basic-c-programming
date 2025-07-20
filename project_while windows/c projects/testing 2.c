#include <stdio.h>
#include <stdlib.h>
int fact(int num);

int main()
{
    int n;
    scanf("%d", &n);
    int f = fact(n);
    printf("%d",f);
    return 0;
}
int fact(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
      return  num = num*fact(num-1);
}
