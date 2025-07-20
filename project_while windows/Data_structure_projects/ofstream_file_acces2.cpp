#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*this is from user input,
    and data is also storing in the file,
    so if we write something new, every speech  will
    be saved*/

    string s;
    ofstream file2;
    file2.open("Student.txt", ios::out|ios::app);

    /*basically 'ios::out|ios::app' is a built in function,
    which stored data into files*/

    cout<<"Write down there :\n";
    getline(cin, s);
    /*it's from user input*/
    file2<<s;

    file2.close();
    return 0;

}
