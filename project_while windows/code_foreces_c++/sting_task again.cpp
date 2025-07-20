/*#include<bits/stdc++.h>
using namespace std;

int main()
{
//    string s="Bangladesh is a beautiful country";
    //getline(cin, s);

    string s;
    getline(cin, s);



    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='z')
        {
            s[i]+=32;
            break;
        }
    }
    for(int j=0;j<s.size();j++)
    {

        if(j%2==0 && s[j] == 'a' || s[j] == 'e' || s[j] == 'i' ||
           s[j] == 'o' || s[j] == 'u')
        {
            s[j]='.';
        }
    }

//    int j=0;
//    while(j<s.size())
//    {
//        if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
//        {
//            s.erase(j,1);
//        }
//        else
//        {
//            j++;
//        }
//    }

    cout<<s;

    return 0;
}
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input, output = "";
    cin >> input;

    string vowels = "AEIOUYaeiouy"; // Vowel characters
    string consonants = "BCDFGHJKLMNPQRSTVWXZbcdfghjklmnpqrstvwxz"; // Consonant characters

    for (char c : input)
    {
        if (vowels.find(c) == string::npos)
        {
            output += ".";
            output += tolower(c);
        }
    }

    cout << output << endl;

    return 0;
}
