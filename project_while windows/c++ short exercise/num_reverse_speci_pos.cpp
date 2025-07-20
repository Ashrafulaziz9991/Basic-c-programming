#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    getline(cin, num);
    //int s = num.size()+num.size()-2;
    reverse(num.begin()+num.size()-2, num.end());
    cout<<num;
    //cout<<"\n"<<num.size()-2;
    return 0;
}
