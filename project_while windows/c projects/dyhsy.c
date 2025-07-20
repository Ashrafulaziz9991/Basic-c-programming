#include<stdio.h>

int main()
{
  int L, ara[100];
  for(L=1;L<=7;L++)
    {
        scanf("%d",&ara[L]);
    }
    for(L=1;L<=7;L++)
    {
        printf("'%d'th position %d\n",L,ara[L]);
    }

  return 0;
}
