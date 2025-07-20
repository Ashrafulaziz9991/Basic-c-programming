#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the Numbers of Subject :";
    int n, i, counter=0;cin>>n;
    cout<<"Enter the marks of Subject :";
    int arr[n], a[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<34)
        {
            a[counter]=arr[i];
            counter++;
        }
    }
    cout<<"\nFailed Subject marks :";
    for(i=0;i<counter;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
