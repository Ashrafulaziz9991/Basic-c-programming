/*
#include<bits/stdc++.h>
using namespace std;
bool sub_set(vector<int> vec, vector<int>v)
{
    //bool flag = false;
    //vector<int>vec2;
    for(int j=0; j<vec.size(); j++)
    {
//        if(vec[j]!=v[j] || vec[j] != v[j+1]){
//            j++;
//        }
        if(find(vec.begin(), vec.end(), v[j])== v.end()){
            return false;
        }
    }
    return true;

}

int main()
{
//    int counter = 0;
    cout<<"Enter the size of First Array :";
    int n;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements of First Array :";
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    cout<<"Enter the size of Second Array :";
    int m;
    cin>>m;
    vector<int>w(m);
    cout<<"Enter the elements of Second Array :";
    for(int i=0; i<n; i++)
    {
        cin>>w[i];
    }
//    sort(v.begin(),v.end());
//    sort(w.begin(),w.end());

//    int N;

//    n>m ? N = n : N = m;

//    for(int i=0;(n>m?i<n:i<m);i++)
//    {
//        if(v[i]==w[i])
//        {
//            counter++;
//            break;
//        }
//    }

//    cout<<N<<endl;

    if(sub_set(v, w))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
//time complexity is O(n*m)
bool isSubset(vector<int>& vec, vector<int>& v)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (find(v.begin(), v.end(), vec[i]) == v.end())
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << "Enter the size of First Array: ";
    int n;
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of First Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "Enter the size of Second Array: ";
    int m;
    cin >> m;
    vector<int> w(m);
    cout << "Enter the elements of Second Array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> w[i];
    }
    if (isSubset(v, w))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
//time complexity is O(n+m)
bool isSubset(vector<int>& vec, vector<int>& v)
{
    unordered_set<int> set(v.begin(), v.end());
    for (int i = 0; i < vec.size(); i++)
    {
        if (set.find(vec[i]) == set.end())
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << "Enter the size of First Array: ";
    int n;
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of First Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "Enter the size of Second Array: ";
    int m;
    cin >> m;
    vector<int> w(m);
    cout << "Enter the elements of Second Array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> w[i];
    }
    if (isSubset(v, w))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
