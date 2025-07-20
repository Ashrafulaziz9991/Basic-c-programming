#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the number of students :";
    int num, counter=0;
    cin>>num;
    vector<int>p;
    vector<int>v(num);
    cout<<"Enter the marks in math of the following students:";
    for(int i=0; i<num; i++)
    {
        cin>>v[i];
    }

    //cout<<"All of number : \n";

    for(int i=0; i<num; i++)
    {
        if(v[i]<33)
        {
            counter++;
            //something is wrong in the results
        }
        p[counter]= {v[i]};
        cout<<p[i]<<" ";
    }
    return 0;
}
