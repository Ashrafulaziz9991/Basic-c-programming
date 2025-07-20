/*#include <iostream>
using namespace std;

int main()
{
    long long n, sum = 0;
    cin >> n;
    if(n%2==0)
        sum = n/2;
    else
        sum = -(n+1)/2;

    sum = n%2 != 0? -(n+1)/2 : n/2;
    cout<<sum;
    return 0;
}
*/

#include <iostream>
int main()
{
    long long n, sum = 0;
    std::cin>>n;
    sum = n%2 != 0? -(n+1)/2 : n/2;
    std::cout<<sum;
    return 0;
}
