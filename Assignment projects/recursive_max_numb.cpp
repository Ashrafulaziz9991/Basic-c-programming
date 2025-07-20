// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     ios_base::sync_with_stdio(0);
// //     cin.tie(0);
// //     int n;
// //     cin >> n;
// //     vector<int> vec(n);
// //     for (int i = 0; i < n; i++)
// //     {
// //         /* code */
// //         cin >> vec[i];
// //     }
// //     int maxi = vec[0];
// //     for (int i = 0; i < n; i++)
// //     {
// //         /* code */
// //         if (vec[i] > maxi)
// //         {
// //             /* code */
// //             maxi = vec[i];
// //         }
// //     }
// //     cout << maxi;

// //     return 0;
// // }

// // int maxinum(vector<int>r, int n)
// // {
// //     if (r.size()==1)
// //     {
// //         return v[0];
// //     }
// //     return max
// // }

// #include "stdio.h"

// // find the max number in a list/array

// // n is the last index of the array
// int arr_max(int arr[], int max, int n)
// {
//     // base case
//     if (n == 0)
//     {
//         if (arr[n] > max)
//             max = arr[n];
//         return max;
//     }
//     else
//     {
//         if (arr[n] > max)
//             max = arr[n];
//         return arr_max(arr, max, n - 1);
//     }
// }

// int main(void)
// {
//     // Disable stdout buffering
//     setvbuf(stdout, NULL, _IONBF, 0);
//     int arr[] = {33, 2, 3, 11, 5, 6, 7, 8, 9};
//     int max = 0;

//     max = arr_max(arr, max, 8);
//     printf("\nMax is: %d\n", max);

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int maxinum(vector<int>x)
{
    if (x.empty())
    {
        //do nothing
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>vec(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>vec[i];
    }
    
    return 0;
}