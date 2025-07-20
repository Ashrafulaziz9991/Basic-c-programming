#include<iostream>
using namespace std;
 
void ascend(int a, int arr[])
{
    for (int i = 0; i < a; ++i) {
        for (int j =i+1; j < a; ++j) {
            if(arr[i] > arr[j]) //ascending order condition
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    return;
}

int main()
{
    int arr[] = {7, 2, 13, 2, 11, 4};
    int a = 6;

//    for(int i=0; i<6; i++)
//    {
//        cout<<arr[i]<<" ";
//    }

    ascend(a, arr);
    for (int i : arr) {
        cout<<i<<" ";
    }
    return 0;
}
/*
7
2
13
2
11
4


*/
