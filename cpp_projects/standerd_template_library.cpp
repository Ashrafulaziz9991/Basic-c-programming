#include<bits/stdc++.h>
using namespace std;

int main()
{
    //case of set

    cout<<"Ordered chart :";

    set<int>s;
    s.insert(6);
    s.insert(36);
    s.insert(96);
    s.insert(6);
    s.insert(86);
    s.insert(76);
    s.insert(60);
    s.insert(46);
    s.insert(64);
    s.insert(60);
    s.insert(64);
    for (int i : s)

    {
        /* code */
        cout<<i<<" ";
    }
    //0 1 2 3 4 5 6 7 8 9
    cout<<endl;
    
    cout<<"Unordered chart :";

    unordered_set<int>s2;
    
    s2.insert(7);
    s2.insert(27);
    s2.insert(77);
    s2.insert(72);
    s2.insert(78);
    s2.insert(07);
    s2.insert(73);
    s2.insert(77);
    s2.insert(87);

    for (auto i : s2)
    {
        cout<< i <<" ";
    }
    cout<<endl;


    //pair<int, int>t = {3, 7};
    //cin>>    
    //cout<<t;
    
    return 0;
}