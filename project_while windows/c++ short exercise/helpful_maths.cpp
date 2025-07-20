#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i;
    string digits;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='+')
        {
            //do nothing
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            digits += s[i];
        }
    }
    cout<<"Charecters are "<<digits<<"\n";

    sort(digits.begin(), digits.end());
    int digitIndex = 0;
    for(i = 0; i < s.size(); i++)
    {
        if(s[i] == '+')
        {
            // do nothing
        }
        else if(s[i] >= '0' && s[i] <= '9')
        {
            s[i] = digits[digitIndex]; // Replace with sorted digit
            digitIndex++;
        }
    }

    cout<<digitIndex<<"\n";
    cout<<s;
    return 0;
}
