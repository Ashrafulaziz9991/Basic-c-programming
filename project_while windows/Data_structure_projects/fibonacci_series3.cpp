#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 0;
    int first = 0;
    int sec = 1;
    while(i<n)
    {

        if (i == 0)
        {
            cout << first << " ";
        }
        else if (i == 1)
        {
            cout << sec << " ";
        }
        else
        {
            int next = first + sec;
            cout << next << " ";
            first = sec;
            sec = next;
        }
        i++;
    }
    return 0;
}
