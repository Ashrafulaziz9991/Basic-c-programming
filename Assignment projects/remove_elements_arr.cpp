#include<bits/stdc++.h>
using namespace std;

int find_Number_position(vector<int>vec, int target)
{
    for(int j=0;j<vec.size();j++)
    {
        if(vec[j] == target)
        return j;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    int x, y;
    cin>>x>>y;
    int x_pos = find_Number_position(vec, x);
    int y_pos = find_Number_position(vec, y);
//    cout<<"Position of x is "<<x_pos;
//    cout<<"\nPosition of y is "<<y_pos<<"\n";

    x_pos>y_pos? vec.erase(vec.begin()+y_pos , vec.begin()+x_pos+1) : vec.erase(vec.begin()+x_pos , vec.begin()+y_pos+1);

//    if(x_pos>y_pos){
//        vec.erase(vec.begin()+y_pos , vec.begin()+x_pos+1);
//    }
//    else{
//        vec.erase(vec.begin()+x_pos , vec.begin()+y_pos+1);
//    }
    for(int i : vec)
    {
        cout<< i <<" ";
    }
    return 0;
}

/*for(int j=i+1; j<n; j++)
        {
            if(vec[i] == x && vec[j] == y)
            {
                cout<<"Positions are "<<i<<" "<<j<<endl;;
                return 0;
            }
        }
        for(int j=i+1; j<n; j++)
        {
            if(vec[i] == x && vec[j] == y)
            {
               auto start=vec.begin()+i;
               auto endd=vec.begin()+j;
               vec.erase(start,endd);
            }
        }
        */
