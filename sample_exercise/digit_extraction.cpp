#include<iostream>
using namespace std;

int main()
{
    //digit extract of the input number
    int num, rem, counter=0;
    cout<<"Enter a number :";
    cin>>num;
    while(num>0)
    {
        rem = num%10;
        cout<<rem<<" ";
        num/=10;
        counter+=rem;
    }
    cout<<"\nAddition of digit is "<<counter;
    return 0;
}
