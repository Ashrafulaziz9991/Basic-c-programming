#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    unordered_set<int>us;
//    us.insert(8);
//    us.insert(7);
//    us.insert(6);
//    us.insert(74);
//    us.insert(74);
//    us.insert(17);
//    us.insert(47);
//    us.insert(79);
//    for(int i=0; i<70; i++){
//        if(i%2!=0){
//        us.insert(i);
//        }
//    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        us.insert(x);
    }
    cout<<"Enter your Key :";
    int k;
    cin>>k;



    int count = us.count(k);
    cout<<count<<endl;

    for(auto x : us){
        cout<<x<<" ";
    }
    return 0;
}
