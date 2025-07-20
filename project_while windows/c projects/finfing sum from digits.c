#include<stdio.h>

int main()
 {
     int n, p, sum = 0;

     for (scanf("%d", &n); n != 0; n = n/10)
          {
          p = n % 10;
          sum = sum + p;
          }

     printf("%d\n", sum);

     return 0;
 }
