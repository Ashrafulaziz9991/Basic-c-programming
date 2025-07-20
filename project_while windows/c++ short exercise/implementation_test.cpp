#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    // we've to choose a number as terget & have to check if there any 2 elements exist so where summetion == terget

    vector<int>numlist = {6,3,1,3,7};
    int target = 11, l = 1;

    // for (auto &&i : numlist)
    // {
    //     cout<<i<<" ";
    // }

    // for (size_t i = 0; i < numlist.size(); i++)
    // {
    //     if (numlist[i]+numlist[i+l] == target)
    //     {
    //         cout<<"Yes, found"<<endl;
    //         return 0;
    //     }
    //     else if (numlist[i]+numlist[i+l] != target)
    //     {
    //         l++;
    //     }
    //     // else
    //     //     i++;
    // }

    //time complexity O(n^2)
    for (size_t i = 0; i < numlist.size(); i++)
    {
        for (size_t j = 0; j < numlist.size(); j++)
        {
            if (numlist[i]+numlist[j] == target)
            {
                cout<<"Yes, found "<<numlist[i] <<" + "<<numlist[j]<<" = "<<target<<endl;
                return 0;
            }
        }
    }

    cout<<"Not found "<<endl;

    

    return 0;
}