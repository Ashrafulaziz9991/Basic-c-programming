/*#include<iostream>
using namespace std;

int main()
{
    int num, counter=0, i, temp, sum=0;
    cin>>num;
    int a[10];
    while(num>0)
    {
        temp=num%10;
        //cout<<temp<<"\n";
        num/=10;
        sum+=temp;
        counter++;
        int a[counter]={temp};
        cout<<a[counter]<<" ";
    }
    cout<<sum;
    cout<<"\n"<<counter;
    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //int n;cin>>n;
    //cin.ignore();
    string s;
    getline(cin, s);

    //s.resize(n);

    //cout<<"\n"<<s<<"\n";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
        }
    }
    cout<<s;
    return 0;
}
*/
/*#include <iostream>
#include <vector>
//in the case of vector
using namespace std;

int main() {
    int size;

    // Taking input for the size of the vector
    cout << "Enter the size of the vector: ";
    cin >> size;

    // Initializing the size and taking input for the vector
    vector<int> myVector(size);
    cout << "Enter " << size << " integers for the vector:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> myVector[i];
    }

    // Displaying the entered vector
    cout << "You entered the vector: ";
    for (int i : myVector) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
*/
/*
#include <iostream>
#include <vector>
//in the case of Array
using namespace std;

int main()
{
    int size;

    // Taking input for the size of the Array
    cout << "Enter the size of the Array: ";
    cin >> size;

    // Initializing the size and taking input for the Array
    int arr[size];
    cout << "Enter " << size << " integers for the Array:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Displaying the entered Array
   cout << "You entered the Array: \n";
    for (int i : arr) {
        cout << i << endl;
    }
    //cout << endl;
    /*
     * This structure & above "for loop" cout structure work are same
       for (int i = 0; i < size; ++i) {
           cout << "Element " << i + 1 << ": ";
           cout << arr[i] << endl;
       }
       return 0;
   }*/

/*#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    // Find the minimum element in an array
    int arr[] = {5, 2, 8, 1, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int minInArray = *std::min_element(arr, arr + arrSize);
    std::cout << "Minimum in array: " << minInArray << std::endl;

    // Find the minimum element in a vector
    std::vector<int> vec = {3, 9, 4, 6, 2};
    int minInVector = *std::min_element(vec.begin(), vec.end());
    std::cout << "Minimum in vector: " << minInVector << std::endl;

    // Find the minimum between a few numbers
    int num1 = 10, num2 = 7, num3 = 12;
    int minBetweenNumbers = std::min({num1, num2, num3});
    std::cout << "Minimum between numbers: " << minBetweenNumbers << std::endl;

    return 0;
}
*/
/*
//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;cin>>a;
    long long int b;cin>>b;
    string s;cin>>s;
    float f;cin>>f;
    double d;cin>>d;

//    cout<<a<<endl;
//    cout<<b<<endl;
//    cout<<s<<endl;
//    cout<<f<endl;
//    cout<<d<<endl;
    cout<<a<<"\n"<<b<<"\n"<<s<<"\n";
    //<<f<<"\n";
    //printf("%0.3lf\n",f);
    cout<<fixed<<setprecision(3)<<f<<"\n";
    //cout<<fixed<<setprecision(5)<<d<<"\n";//or
    cout<<d<<setprecision(5)<<fixed<<"\n";
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    for(int i=1; i<n; i*=2)
    {
        cout<<"Phitron"<<endl;
    }
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int ans=0;
    // Initialize ans to 1 if n > 0, otherwise 0
//    if(n>0)
//        ans = 1;
//    else
//        ans = 0;

    for(int i = 1; i < n; i++)
    {
        if(a[i] != a[i - 1])
            ans++;
    }

    cout << ans;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>d[n+1];
    for(int i=1 ; i<=n ; i++)
        for(int j=i ; j<=n ; j = j+i )
            d[j].push_back(i);
    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(5, 2);
    for (int i = 0;i < 5 - 2;i++)
        v[i] = i;
    for (int i = 0;i < 5;i++)
        cout << v[i] << " ";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5);
    for (int i = 0; i < 5; i++)
        cin>>v[i];
    sort(v.begin(), v.end());

    for (int i = 0; i < 5; i++)
        cout << v[i] << " ";
    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5);
    for (int i = 1; i <= 5; i*=2)
        {
            //cin>>v[i];
            v.push_back(i);
            int a;cin>>a;
        }
    //sort(v.begin(), v.end());

    for (int i = 0; i < 5; i++)
        cout << v[i] << " ";
    return 0;
}
*/
/*
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout<< "Constructor called!" <<endl;
    }
    ~MyClass()
    {
        cout << "Destructor called!" << endl;
    }
};

int main()
{
    // Using new and delete for a single variable
    int p = 42;  // Allocates memory and initializes it to 42
    int* q;  // Allocates memory and initializes it to 42
    q = &p;
    *q=9;
    //int* p = new int(42);  // Allocates memory and initializes it to 42
    cout << p << endl;  // Outputs: 42
    //delete p;  // Deallocates memory

    // Using new and delete for an array
    int* arr = new int[5];  // Allocates memory for an array of 5 integers
    for (int i = 0; i < 5; ++i)
    {
        arr[i] = i * 10;
    }
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";  // Outputs: 0 10 20 30 40
    }
    cout << endl;
    delete[] arr;  // Deallocates memory for the array

    // Using new and delete for objects
    MyClass* obj = new MyClass();  // Allocates memory and calls constructor
    delete obj;  // Calls destructor and deallocates memory

    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

void swapt(int &x, int &y)
{
//this is user defined function
//our purpose is just swap the integers values
    int temp = x;
    x = y;
    y = temp;
    return;
}

int main()
{
    int a, b;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    swapt(a,b);
    cout<<"a = "<<a<<" b = "<<b;
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

void sortt(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
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
    int a;
    cout<<"Enter a :";
    cin>>a;
    int arr[a];
    cout<<"Enter the elements of array :";
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    sortt(arr,a);
    //sort(arr.begin(),arr.end());
//    cout<<"a = "<<a<<" b = "<<b;
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

//void sortt(int arr[], int n)
//{
//    for(int i=0; i<n; i++)
//    {
//        for(int j=i+1; j<n; j++)
//        {
//            if(arr[i]>arr[j])
//            {
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//    return;
//}

int main()
{
    int a;
    cout<<"Enter a :";
    cin>>a;
    //int arr[a];
    vector<int>arr(a);
    cout<<"Enter the elements of array :";
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
//    for(int i : arr)
//    {
//        cin>>arr[i];
//    }
    sort(arr.begin(),arr.end());
    //sort(arr.begin(),arr.end());
//    cout<<"a = "<<a<<" b = "<<b;
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    for(int i=0;i<=15;i++)
    {
        v.push_back(i);
    }
    for(int i : v)
    {
        cout<<i<<endl;
    }
    return 0;
}
*/
/**
#include<bits/stdc++.h>
using namespace std;

int main()
{
    auto x = 946.5, y = 4.8;
//    cout<<"Enter x :";
//    cin>>x;
//    cout<<"Enter y :";
//    cin>>x;
    cout<<x+y;
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
/*
    int n;cin>>n;
//    int arr[] = {3,5,9,6,4,7,1,2};
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr, arr+n);
    /**in the case of vector sort function will be used like
    sort(arr.begin(), arr.end());

    for(int num : arr)
        cout<<num<<" ";
*/

//    int x = 5;
//    int* y = &x;
//    cout<<x;
//    cout<<"\n"<<*y;

    int a;
    cin>>a;
    set<int>uset;
//    uset.insert(9);
//    uset.insert(91);
//    uset.insert(19);
//    uset.insert(90);
//    uset.insert(97);
//    uset.insert(79);
//    uset.insert(89);
//    uset.insert(29);

    for(int i=0;i<a;i++)
    {
        int a;
        cin>>a;
        uset.insert(a);
    }
    //sort(uset.begin(), uset.end());

    for(auto i : uset)
        cout<<i<<" ";
    cout<<"\n";
    int x = 8<7;
    cout<<x;
    return 0;
}



