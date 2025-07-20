#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;
    string s="BGGBG";
    //getline(cin, s);
    int i, j;

    for(i=0; i<t; i++)
    {
        for(j=i+1; j<n-1; j++)
        {
            if(s[i]<s[j])
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

/*

#include <bits/stdc++.h>
using namespace std;

int main() {
    string qu = "BGGBG";
    int i = 0;

    while (i < 4) {  // Loop until the second-to-last element
        if (qu[i] == 'B' && qu[i + 1] == 'G') {
            swap(qu[i], qu[i + 1]);
            i++;  // Increment i to move to the next pair
        }
        i++;  // Increment i in any case to avoid an infinite loop
    }

    cout << qu;
    return 0;
}
*/
