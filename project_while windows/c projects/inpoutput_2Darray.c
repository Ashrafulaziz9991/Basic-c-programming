#include<stdio.h>
#include<string.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(row==col)
    {

    }
    else
    {
        printf("Not diagonal \n");
    }
    return 0;
}
