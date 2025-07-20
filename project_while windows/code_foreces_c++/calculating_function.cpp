//#include <cmath>
//#include <iostream>
//
//using namespace std;
//
//long long calculate_sum(long long  n)//using recursive function
//{
//    if(n==0)
//        return 0;
//    else if(n%2!=0)
//        return -n+calculate_sum(n-1);
//    else if(n%2==0)
//        return n+calculate_sum(n-1);
//}
//
// main()
//{
//    long long  n;
//    cin>>n;
//    cout<<calculate_sum(n);
//    return 0;
//}

/*
#include <cmath>
#include <iostream>
using namespace std;

 main()
{
    long long n, a;
    cin >> n;
    if(n % 2 == 0) a = n / 2;
    else a = ((n + 1) / 2) * (-1);
    cout << a << endl;
    return 0;
}
*/

#include <iostream>
using namespace std;

long long calculate_sum(long long  n)
{
    long long sum=0;
    for (long long i=1; i<=n; i++)
    {

        if(n%2!=0)
        {
            sum-=i;
        }
        else if(n%2==0)
        {
            sum+=i;
        }
    }
    return sum;
}

main()
{
    long long  n;
    cin>>n;
    cout<<calculate_sum(n);
    return 0;
}
