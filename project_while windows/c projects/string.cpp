#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string s2="I live in Dhaka";

    cout<<s<<endl;
    cout<<s.size()<<endl;//string length
    string s3= s+s2;
    cout<<s3<<endl;
    return 0;
}
