#include<bits/stdc++.h>

using namespace std;

int main()
{

    ofstream of;
    of.open("1.txt");
    of<<"Hello again\n";

    ofstream of2;
    of2.open("input.txt");
    of2<<"Hello again you too\n";

    ifstream X;
    X.open("0.txt");
    int x;
    double y, z;
    X>>x>>y>>z;
    cout<<x<<" "<<y<<" "<<z<<endl;


    return 0;
}

