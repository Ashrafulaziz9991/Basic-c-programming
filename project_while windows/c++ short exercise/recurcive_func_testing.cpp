#include<bits/stdc++.h>
using namespace std;
/*
void nums(int n)
{
    if(n==0)
        return;
    else
        cout<<n<<"\n";
        nums(n-1);

    return;
}
*/

int nums(int n)
{
    if(n==0)
        return 0;
    else
        return nums(n-1);//wrong position

}


int main()
{

    int a;
    cin>>a;
    cout<<a<<"\n"<<nums(a);
    return 0;
}
