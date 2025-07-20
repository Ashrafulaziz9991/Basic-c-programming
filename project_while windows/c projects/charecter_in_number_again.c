#include<stdio.h>
void convert_letter(int x);

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int n;
        scanf("%d",&n);
        convert_letter(n);
    }
    return 0;
}
void convert_letter(int x)
{
    char letter[] = "ABCDEFGHI";

    while (x>0)
    {
        int last_digit = x % 10;
        printf("%c", letter[last_digit - 1]);
        x /= 10;
    }
    printf("\n");

    return;
}
