#include <bits/stdc++.h>
using namespace std;

void print(list<int> &SL)
{
    for (auto i : SL)
    {
        cout << i << " ";
    }
    cout<<endl;
    return;
}

void insert_after_value(list<int> &SL, int index, int data)
{
    auto i = SL.begin();
    advance(i, index);
    SL.insert(i, data);
    return;
}

void search_value(list<int> &SL, int value)
{
    for (auto i = SL.begin(); i != SL.end();)
    {
        if (*i == value)
        {
            cout << value << " is found in the list" << endl;
            return;
        }
        i++;
    }
    cout << value << " doesn't exist on the list" << endl;
}

void removezero(list<int>&SL)
{
    for (auto i = SL.begin(); i != SL.end();)
    {
        if (*i == 0)
        {
            i = SL.erase(i);
            i++;
        }
        
    }
}

void remove(list<int> &SL, int index)
{
    auto i = SL.begin();
    advance(i, index);
    SL.erase(i);
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    list<int> l;
    l.push_front(16);
    l.push_front(644);
    l.push_front(16);
    l.push_front(60);
    l.push_front(76);
    l.push_front(63);
    l.push_front(7);

    // cout<<l;
    //  for (auto &&i : l)
    //  {
    //      cout<< i << " ";
    //  }

    print(l);

    cout << endl;

    l.push_front(6);
    l.push_front(601);
    l.push_front(96);
    l.push_front(769);
    l.push_front(67);
    l.push_front(79);

    // for (auto &&i : l)
    // {
    //     cout<< i << " ";
    // }
    print(l);

    // l.pop_back();
    // l.pop_back();
    // l.pop_back();

    cout << endl;

    print(l);

    l.pop_back();
    l.pop_back();
    l.pop_back();
    l.pop_back();
    l.pop_front();

    cout << endl;
    // auto i = l.begin();
    // advance(i,0);
    // l.insert(i, 9);

    cout << endl;
    print(l);

    // auto i = l.begin();
    //  advance(i,4);
    //  l.erase(i);

    remove(l, 4);
    cout << endl;
    print(l);

    cout << endl;
    cout << l.size() << endl;

    print(l);
    search_value(l, 16);

    l.push_back(0);
    l.push_back(0);
    l.push_front(0);

    print(l);

    removezero(l);
    print(l);

    return 0;
}