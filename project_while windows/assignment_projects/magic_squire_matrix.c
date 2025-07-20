#include<stdio.h>

int main()
{
    int i, j;
    int m[3][3];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    int r1 = m[0][0]+m[0][1]+m[0][2];
    int r2 = m[1][0]+m[1][1]+m[1][2];
    int r3 = m[2][0]+m[2][1]+m[2][2];
    int c1 = m[0][0]+m[1][0]+m[2][0];
    int c2 = m[0][1]+m[1][1]+m[2][1];
    int c3 = m[0][2]+m[1][2]+m[2][2];
    int d1 = m[0][0]+m[1][1]+m[2][2];
    int d2 = m[0][2]+m[1][1]+m[2][0];

    if(r1==r2 && r2==r3 && r3==c1 && c1==c2 && c2==c3 && c3==d1 && d1==d2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
