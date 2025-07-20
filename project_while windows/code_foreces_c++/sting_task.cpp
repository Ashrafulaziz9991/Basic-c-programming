#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="Bangladesh is a beautiful country";
    //getline(cin, s);
    int i=0;
    while(i<s.size())
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            s.erase(i,1);
        }
        else
        {
            i++;
        }
    }
    cout<<s;

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Bangladesh is a beautiful country";
    //getline(cin, s);
    for (int i = 0; i < s.size();)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            s.erase(i, 1);
        }
        else
        {
            i++; // Move to the next character
        }
    }
    cout << s;

    return 0;
}
*/

