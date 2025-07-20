#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*
    int n, terget;
    cin>>n>>terget;
    //cout<<n<<" ";
    while(n<terget+1)
    {
        cout<<n<<" ";
        n=n+1;
    }
    */
    int n, n1=0, n2=1, n3, i;
    cin>>n;
    //printf("%d %d", n1, n2);
    cout<<n1<<" "<<n2;
    for (i = 2;i < n;i++)
    {
        n3 = n1 + n2;
        //printf(" %d", n3);
        cout<<" "<<n3;
        n1 = n2;
        n2 = n3;
    }

    return 0;
}
