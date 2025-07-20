#include<iostream>
using namespace std;

void ascend(int a, int v[])
{
    for (int i = 0; i < a; ++i)
    {
        for (int j =i+1; j < a; ++j)
        {
            if(v[i] > v[j]) //ascending order condition
            {
                /*int temp = v[i];
                v[i] = v[j];
                v[j] = temp;*/
                swap(v[i], v[j]);
            }
        }
        cout<<"Afetr pass "<< i <<": ";
        for(int k=0; k<a; k++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    /*for (int i: v) {
        cout<<i<<" ";
    }*/

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

