/**
*in the case of Array, Array size = sizeof(arr)/sizeof(arr[0])
*in the case of Vector, vector size = vec.size()
*in the case of Binary search list should be sorted first
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{

    cout<<"Enter Your size of Array ";
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //sort(arr,arr+n);//time complexity is this Built in function is O(nlogn)
    //for(int i: arr)
    //    cout<<i<<" ";

    int key;
    cout<<"Enter Your Key ";
    cin>>key;

    auto lower = lower_bound(arr.begin(), arr.end(), key);
    auto upper = upper_bound(arr.begin(), arr.end(), key);

    int count = upper - lower;

    bool flag = false;
    int start = 0, endd = n-1;
    while(start<=endd){
        int mid = (start+endd)/2;

        if(arr[mid] == key){
            flag = true;
            //cout<<"Found "<<mid<<endl;
            break;
        }
        else if(arr[mid]>key){
            endd = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
//    if(flag == false){
//        cout<<"NO";
//    }

    flag == true && count>1 ? cout<<"YES\n" : cout<<"NO";

    return 0;
}
