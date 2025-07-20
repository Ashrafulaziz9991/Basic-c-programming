#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int chock = n;
    int pack = n;

    while(pack>=4)
    {

        chock +=(pack/4);
        pack = (pack/4)+(pack%4);
    }

     printf("%d", chock);
    return 0;
}
