/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;
    string s="BGGBG";
    //getline(cin, s);

    for(int i=0; i<t; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            if(s[j-1]=='B' && s[j]=='G')
            {
                  swap(s[j-1], s[j]);
            }
        }
        //cout<<i<<"'th' position is "<<s<<"\n";
    }
    cout<<s;
    return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                j++; // Move to the next pair immediately
            }
        }
    }
    cout << s;
    return 0;
}
