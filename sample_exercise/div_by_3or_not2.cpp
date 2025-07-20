/*#include<iostream>
using namespace std;
int main()
{
    /*int t;cin>>t;
    while (t--)
    {
        long long int n;cin>>n;
        if(n%3==0)
        cout<<"YES\n";
        else
        cout<<"No\n";
    }
    string num;
    cin>>num;
    if(num%3==0)
        cout<<"YES\n";
    else
        cout<<"No\n";
    return 0;
}
*/

/*#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecison;
using namespace std;

int main() {
    mp::cpp_int num1, num2;
    cout <<"Enter Num1 ";
    cin >> num1;
    cout <<"Enter Num2 ";
    cin >> num2;

    / Convert string to integer
    int numAsInt = stoi(num);

    if (numAsInt % 3 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    mp::cpp_int sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    // Multiplication
    mp::cpp_int product = num1 * num2;
    cout << "Product: " << product << endl;


    return 0;
}

/
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

namespace mp = boost::multiprecision;
using namespace std;

int main() {
    mp::cpp_int num1, num2;

    // Input large numbers
    cout << "Enter the first large number: ";
    cin >> num1;

    cout << "Enter the second large number: ";
    cin >> num2;

    // Addition
    mp::cpp_int sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    // Multiplication
    mp::cpp_int product = num1 * num2;
    cout << "Product: " << product << endl;
    return 0;
}
*/

#include <iostream>
#include <string> // Include the necessary header for using strings
int main()
{
    long long x;
    std::cin >> x; // You may want to uncomment this line to input a value for x
    std::string x_str = std::to_string(x); // Convert the long long to a string
    ///std::cout << x_str.size(); // Output the size of the string (number of digits)
    std::cout<<x/2;
    return 0;
}
