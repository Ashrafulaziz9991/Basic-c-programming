#include<bits/stdc++.h>
using namespace std;

int fibonacci_series(int n) //using recursive function
{
    if(n<=0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibonacci_series(n-1)+fibonacci_series(n-2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    cout<<"Here is the fibonacci series :";
    for(int i=0;i<n;i++)
    {
        cout<<fibonacci_series(i)<<" ";
    }
    return 0;
}
