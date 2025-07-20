#include<iostream>
using namespace std;

int main()
{
    int a[10], sum = 0;
    cout<<"Enter the digits :\n";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"Sum of digits :"<<sum;
    return 0;
}
