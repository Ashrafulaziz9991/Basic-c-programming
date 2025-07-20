#include<bits/stdc++.h>
using namespace std;

void big_n_small_number(int a[], int n)
{
    int maxx = a[0];
    int minn = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxx)
            maxx = a[i];
        if(a[i]<minn)
            minn = a[i];
    }
    cout<<"\nBig number is "<<maxx<<"\nSmall number is "<<minn;
    return;
}
void ascending_order(int a[], int n)
{
    int i, j, temp;
    i=0;
    while(i<n)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])//ascending order
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        i++;
    }
}

void descending_order(int a[], int n)
{
    int i, j, temp;
    i=0;
    while(i<n)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])//descending order
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        i++;
    }
}

int main()
{
    int n, i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    for(i=0;i<n;i++)
    {
        sum = sum+arr[i];
    }
    cout<<"the sum is "<<sum;
    big_n_small_number(arr, n);
    cout<<"\n";
    ascending_order(arr, n);
    cout<<"Number in Ascending order is :";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    descending_order(arr, n);
    cout<<"\nNumber in Descending order is :";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
