// #include <bits/stdc++.h>
// using namespace std;
//
// int add(int x, int y)
//  {
//      return x+y;
//  }
//
// void diff(int x, int y)
//{
//     cout<<"Difference is "<<x-y<<"\n";
// }
//
// int main()
//{
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//
//     int a, b;
//     cout<<"Enter  two numbers :";
//     cin>>a>>b;
//     cout<<"addition is "<<add(a, b)<<endl;
//     diff(a, b);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
//
// int main() {
//     vector<int> a(2);
//     a[2 - 1] = 2;
//     cout << a[0] << '\n';
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
//
// int fact(int n)
//{
//     if(n == 0)
//         return 1;
//     return fact(n-1)*(n);
// }
//
// int main()
//{
//     int n, f;
//     cout<<"Enter Your Input :";
//     cin>>n;
//     f = fact(n);
//     cout<<"Here is your Output :"<<f;
//     return 0;
// }

//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> v(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> v[i];
//    }
//    unordered_set<int> s;
//    //    s.insert(9);
//    //    s.insert(94);
//    //    s.insert(90);
//
//    for (int i = 0; i < v.size(); i++)
//    {
//        s.insert(v[i]);
//    }
//    cout << "Lenght of vector :" << s.size() << endl;
//    for (int i : s)
//    {
//        cout << i << " ";
//    }
//    return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    vector<int>a = {7, 6, 9, 3, 0, 1};
//    vector<char>a2 = {'p', 'q', 'w', 't', 'e', 'f'};
//
//    for(auto i : a)
//    {
//        cout<< i <<" ";
//    }
//
//    cout<<endl;
//
//    for(auto i : a2)
//    {
//        cout<< i <<" ";
//    }
//
////    swap(a, a2);
//
//    for(auto i : a)
//    {
//        a.push_back(a2[i]);
//        cout<< i <<" ";
//    }
//
//    cout<<endl;
//
//    for(auto i : a2)
//    {
//        a2.push_back(a[i]);
//        cout<< i <<" ";
//    }
//
//    return 0;
//}

#include<bits/stdc++.h>
#define fr(i, n)  for (int i = 0; i < n; i++)
using namespace std;

vector<int> Pop_front(vector<int>&v)
{
    reverse(v.begin(), v.end());
    v.pop_back();
    reverse(v.begin(), v.end());
    return v;
}

int main()
{
    //int i;
    // string s = "hi, it's to honour for me";
    // fr(i, 4)
    // {
    //     cout<<s[9]<<s[10]<<endl;
    // }

    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    fr(i, v.size())
        cout<<v[i]<<" ";

    v.pop_back();

    cout<<endl;

    fr(i, v.size())
        cout<<v[i]<<" ";

    Pop_front(v);
    cout<<endl;
    for (auto &&i : v)
        cout<< i << " ";
    
    return 0;
}
