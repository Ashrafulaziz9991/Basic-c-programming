#include<iostream>
using namespace std;

void digextr_sum(int a)
{

    int temp, sum = 0;
    while(a>0)
    {
        temp = a%10;
        cout<<temp<<"\n";
        a/=10;
        sum += temp;
    }
    cout<<"\nThe sum is "<<sum<<"\n";
}
int main()
{
    cout<<"Test case no :";
    int t;cin>>t;

    while(t--)
    {
        int n;
        cout<<"Enter the digit :";
        cin>>n;
        digextr_sum(n);
    }
    return 0;
}
//cout<<(n*(n+1))/2;// to count serially sum like 1+2+3+4 = 10 etc;
