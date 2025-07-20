#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, ans;
    scanf("%d %d", &a, &b);
    char opr;
    scanf("%c",opr);
    if(opr == '*')
    {
        ans = a*b;
    }
    else if(opr == '/')
    {
        ans = a/b;
    }
    printf("%d",ans);
    return 0;
}
