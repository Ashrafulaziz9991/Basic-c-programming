#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i, j;

    for(i=0; i<s.size(); i++)
    {
        for(j=i+1; j<s.size(); j++)
        {
            if(s[i]>s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
        cout<<i<<"'th' position is "<<s<<"\n";
    }
    cout<<"sorted string is\n"<<s;
    return 0;
}
