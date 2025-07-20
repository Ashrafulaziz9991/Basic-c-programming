#include<stdio.h>
#include<string.h>
int main()
{
    char A[10000];
    fgets(A,sizeof(A),stdin);
    int l= strlen(A)-1;
    printf("%d",l);
    return 0;
}
