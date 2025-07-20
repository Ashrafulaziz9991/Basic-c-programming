#include<stdio.h>
int main()
{
    int T,i,j;
    int X[100];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&X[i]);
    }
    //int used_time=0;
    int waste_charge=0;
    T<=100;
//    int low=0;
//    int mid=0;
//    int high=0;
    int t1=0;
    int t2=0;
    int t3=0;
    int t4=0;
    for(i=0;i<T;i++)
    {
        waste_charge=100-X[i];
        if(X[i]<=60)
        t1=(60-X[i]);
        if(X[i]<=80)
        t2=(80-X[i])*2;
        if(X[i]<=100)
        t3=(100-X[i])*3;
        t4=t1+t2+t3;
        //printf("%d\n",waste_charge);
    }
    for(i=0;i<T;i++)
    {
        printf("%d\n",t4);
    }
    return 0;
}
