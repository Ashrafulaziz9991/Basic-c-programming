/**
* We'll practice here recursive function
* All type of recursive funtion will be tested
**/

//#include<bits/stdc++.h>
//using namespace std;
//
//void solve(int maxx, int minn)
//{
//    if(maxx<minn)
//        return;
//
//    cout<<maxx<<" ";
//    solve(maxx-1, minn);
//}
//
//int main()
//{
//    int maxx, mini;
//    cin>>maxx>>mini;
//    solve(maxx, mini);
//    return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//int fib(int n)
//{
//    if(n==0)
//        return n;
//    else if(n==1)
//        return 1;
//    else
//        return fib(n-1)+fib(n-2);
//
//}
////fibonacci sereies
//int main()
//{
//    int n;
//    cin>>n;
//    int x = fib(n);
//    cout<<x;
//    return 0;
//}

//sum of fibonacci  0 1 1 2 3 5 8 13 21 34 55 89 144 233
//position of Num   0 1 2 3 4 5 6  7  8  9 10 11  12  13


#include<bits/stdc++.h>
using namespace std;

void fib(int n)
{
//    if(n==0)
//        return n;
//
//    else if(n==1)
//        return 1;

    (n == 1 || n == 0) ? return 1 : return 0;

    return fib(n-1)+fib(n-2);

}
//fibonacci sereies
int main()
{
    int n;
    cin>>n;
    int x = fib(n);
    cout<<x;
    return 0;
}
