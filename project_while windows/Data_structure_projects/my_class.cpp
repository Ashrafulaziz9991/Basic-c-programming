#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
        string name;
        int roll;
        double gpa;
    private:
        int id;
        string hobby;
};

int main()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);


    student A;
    cout<<"Enter your name :";
    getline(cin, A.name);
    cout<<"\nEnter your roll :";
    cin>>A.roll;
    cout<<"\nEnter your gpa :";
    cin>>A.gpa;

    cout<<A.name<<"\n";
    cout<<A.roll<<"\n";
    cout<<fixed<<setprecision(2)<<A.gpa<<"\n";
    cout<<setprecision(4)<<fixed<<A.gpa<<"\n";
    return 0;
}
