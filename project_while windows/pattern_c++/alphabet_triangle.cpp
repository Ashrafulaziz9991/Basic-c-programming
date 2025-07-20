#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    getline(cin, n);
    int len=n.size();
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<=i;j++)
        {
            //printf("%c",n[j]);
            cout<<n[j];
        }
        cout<<"\n";
    }
    //cout<<len;
    return 0;
}

/*for(int j=i;j<n;j++) it would print like :         ***
                                                     **
        {                                            *
            cout<<"*";
        }
        */
