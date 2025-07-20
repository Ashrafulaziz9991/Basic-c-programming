// Created by tamzid on 12/25/23.
#include<bits/stdc++.h>

int main()
{
    std::vector<int>v(1);
    for (int i = 0; i < 1; ++i) {
        int a;
        std::cin>>a;
        v.push_back(a);
    }
    for (int i: v) {
        std::cout<< i << std::endl;
    }
    return 0;
}