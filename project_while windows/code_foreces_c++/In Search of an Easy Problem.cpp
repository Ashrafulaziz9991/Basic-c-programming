#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]==1)
        {
            cout<<"HARD";
            return 0;
        }

    }
    cout<<"easy";

    return 0;

}
