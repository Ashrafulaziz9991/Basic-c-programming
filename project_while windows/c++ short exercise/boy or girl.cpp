#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i, j, cnt = 0;
    for(i=0; i<s.size(); i++)
    {
        for(j=i+1; j<s.size(); j++)
        {
            if(s[i]>s[j])
            {
                char temp = s[i]; //ascending order
                s[i] = s[j];
                s[j] = temp;
            }
        }
        if(s[i] != s[i+1] && i>0)
        {
            cnt++;
        }
    }

        if(cnt%2==0)
            cout<<"CHAT WITH HER!\n";
        else
            cout<<"IGNORE HIM!\n";

    /*
    cout<<s<<"\n";
    cout<<cnt;*/
    return 0;
}

