#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    char str[100];
    int i=0;
    cout<<"Enter any string to get ASCII Value of each Character"<<endl;
    cin>>str;
    cout<<"ASCII values of each characters of given string:\n";
    while(str[i])
         printf("%d\n",str[i++]);
    return 0;
}
