#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //Dynamically memory allocation
    int *x = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
    
    cout<<x<<"\n";
    
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cout<<x[i]<<" ";
    }
    //dellocation the memory
    delete[]x;
    return 0;
}