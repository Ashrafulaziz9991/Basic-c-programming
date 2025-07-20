#include<bits/stdc++.h>
using namespace std;
// prototype
vector<int> even_generator(vector<int>vec);

int main()
{
    // Example vector
    vector<int> v = {2, 3, 4, 5, 6, 7, 9, 11, 56};
    vector<int> even_arr = even_generator(v);
    cout<<"Even numbers: ";
    for (int i : even_arr)
    {
        cout<< i << " ";
    }

    return 0;
}

vector<int> even_generator(vector<int>vec)
{
    vector<int>even_vec;

    for(int i : vec)
    {
        if(i%2==0)
        {
            even_vec.push_back(i);
        }
    }
    return even_vec;
}


/*
#include<bits/stdc++.h>
using namespace std;
void even_generator(int arr[], int x)
//time complexity
//O(n)+O(n) = O(n+n) = O(2n) = O(n)
{
    int counter=0;
    for(int i=0; i<x; i++)
    {
        if(arr[i]%2==0)
        {
            arr[counter]=arr[i];
            counter++;
        }
        //cout<<arr[i]<<" ";
    }
    for(int i=0;i<counter;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}

int main()
{
    int n;cin>>n;
    int v[n] ;//={2, 3 , 4, 5, 6};
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    even_generator(v,n);
    return 0;
}
*/
/*
#include <iostream>
#include <vector>

// Function to generate a vector of even numbers
std::vector<int> even_generator(const std::vector<int>& vec) {
    std::vector<int> even_numbers;
    for (int num : vec) {
        if (num % 2 == 0) {
            even_numbers.push_back(num);
        }
    }
    return even_numbers;
}

int main() {
    // Example vector
    std::vector<int> v = {2, 3, 4, 5, 6, 8, 11, 13, 19, 22};

    // Get even numbers from the vector
    std::vector<int> even_numbers = even_generator(v);

    // Print the even numbers
    std::cout << "Even numbers: ";
    for (int num : even_numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
*/
