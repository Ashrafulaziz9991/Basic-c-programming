#include<iostream>
using namespace std;

int main()
{
    int room, rest_space, c = 0;
    cin>>room;
    while(room--)
    {
        int exist,capacity;
        cin>>exist>>capacity;
        rest_space=capacity-exist;
        if(rest_space>=2)
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}
