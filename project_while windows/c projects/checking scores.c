#include<stdio.h>
int main()
{
    int score[5];
    score[0] = 25;
    score[1] = 50;
    score[2] = 75;
    score[3] = 100;
    score[4] = 10;
    int k=50;
    int i;
    int x=0;
    for(i=0;i<5;i++)
    {
        if(score[i]<k)
        {
            score[i]=x;
            x++;
        }
        printf("%d\n",x);
    }
    return 0;
}
