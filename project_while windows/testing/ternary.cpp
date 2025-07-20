#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter three digits :";
    int x,y,z, big;cin>>x>>y>>z;
    big = x>y?x:y && y>z?y:z && x>z?x:z;
    cout<<"the big Number is "<<big;
    return 0;
}
/*
#include<stdio.h>
int main()
{
    int x,y,z, big; scanf("%d %d %d",&x,&y,&z);
    big = x>y?x:y && y>z?y:z && x>z?x:z;
    printf("the big Number is %d",big);
    return 0;
}
*/
