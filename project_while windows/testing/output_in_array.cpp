#include<iostream>
using namespace std;

int main()
{
    int num, counter=0, i, temp, sum=0;
    cin>>num;
    int a[10];
    while(num>0)
    {
        temp=num%10;
        //cout<<temp<<"\n";
        num/=10;
        sum+=temp;
        a[counter]=temp;
        counter++;
    }
    /*for (i=0;i<=counter-1;i++)
        cout<<a[i]<<" ";*/

    for (i=0;i<counter;i++)
        cout<<a[i]<<" ";

    return 0;
}

///*using vector
/*
#include <iostream>
#include <vector> // Include the vector header
using namespace std;

int main() {
    int num, counter = 0, i, temp, sum = 0;
    cin >> num;
    vector<int> a(10); // Correctly declare a vector of integers with size 10

    while (num > 0) {
        temp = num % 10;
        num /= 10;
        sum += temp;
        a[counter] = temp;
        counter++;
    }

    for (i = 0; i < counter; i++) // Change the loop condition to < instead of <=
        cout << a[i] << " ";

    return 0;
}
*/

