#include<stdio.h>

void conse_even_nums()
{

    int n, a, b, c, d, div;
    scanf("%d", &n);
    div = n/4;
    //printf("\n");
    if( div % 2 != 0)
    {
        a = div - 3;
        b = a + 2;
        c = div + 1;
        d = c + 2;
    }
    else
    {
        a = div - 4;
        b = a + 2;
        c = div + 2;
        d = c + 2;
    }
    printf("%d %d %d %d", a, b, c, d);

}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        conse_even_nums();
        printf("\n");
    }
    return 0;
}
