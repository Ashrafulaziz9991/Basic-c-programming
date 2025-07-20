#include<bits/stdc++.h>

int main()
{
    std::cout<<"Enter The size of array  : ";
    int n, sum=0;
    std::cin>>n;
    std::vector<int>add(n);
    for (int i = 0; i < n; ++i) {
        std::cin>>add[i];
        sum+=add[i];
    }
    std::cout<<"The Sum of array is :"<<sum;
    /*std::cout<<"The Elements of array is : ";
    for (int i = 0; i < n; ++i) {
        std::cout<<add[i]<<" ";
    }*/
    return  0;
}