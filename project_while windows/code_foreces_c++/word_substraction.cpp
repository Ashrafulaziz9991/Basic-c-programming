#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int num, subtr;
    cin>>num>>subtr;
    int c=0;
    while(c<subtr)
    {
        if(num%10==0)
            num/=10;
        else
            num-=1;
        c++;
    }
    cout<<num;
    return 0;
}
