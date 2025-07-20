//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int temp, counter=0;
//    vector<int>v= {4, 5, 9, 7, 8};
//    vector<int>even;
//    for(int i=0; i<5; i++)
//    {
//        temp=v[i]%2;
//        if(temp==0)
//        {
//            even[counter]=temp;
//            counter++;
//        }
//        for(int j=0;j<counter;j++)
//        {
//            cout<<even[j]<<" ";
//        }
//    }
//    return 0;
//}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int counter = 0;
    cout<<"Enter the size of First Array :";
    int n;cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements of First Array :";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<"Enter the size of Second Array :";
    int m;cin>>m;
    vector<int>w(m);
    cout<<"Enter the elements of Second Array :";
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());

    for(int i=0;(n>m?i<n:i<m);i++)
    {
        if(v[i]==w[i])
        {
            counter++;
            break;
        }
//        else
//        {
//            cout<<"No\n";
//            break;
//        }
    }

    cout<<counter<<endl;
//    if(v==w)
//    cout<<"Yes\n";
//    else
//    cout<<"No";
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
//binary search algorithm
int Binary_search(vector<int>v, int n, int key)
{
    int start = 0;
    int endd = n;

    while(start<=endd)
    {
        int mid =(start+endd)/2;

        if(v[mid]==key)
        {
            return mid;
        }
        else if(v[mid]>key)
        {
            endd = mid - 1;
        }
        else
        {
            start = mid +1;
        }
    }
    return -1;
}
//array should sorted first to start the binary search
//sorted shoud be acsending or decsending order
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    int k, counter = 0;
    cout<<"Enter Your Key :";
    cin>>k;

    for(int i : vec)
    {
        if(i==k)
            counter++;
    }

//    cout<<Binary_search(vec, n, target);
    if(Binary_search(vec, n, k)!= -1 && counter>1)
    {
        cout<<"found\n";
    }
    else
    {
        cout<<"Not found.";
    }
//    cout<<counter<<endl;
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

bool is_subset(vector<int>x, vector<int>y)
{
    unordered_set<int>group;
    for(int i : y)
    {
        group.insert(i);
    }
    for(int i : x)
    {
        if(group.find(i) == group.end())
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    int m;
    cin>>m;
    vector<int>b(m);
    for(int i=0; i<m; i++)
        cin>>b[i];

//    if(is_subset(a, b))
//    {
//        cout << "a is a subset of b" <<endl;
//    }
//    else
//    {
//        cout << "a is not a subset of b" <<endl;
//    }
    is_subset(a, b) ? cout<<"YES\n" : cout<<"NO" ;

    return 0;
}
