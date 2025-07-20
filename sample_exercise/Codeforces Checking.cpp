// Created by tamzid on 12/23/23.
/*#include <iostream>
using namespace std;
int main()
{
    char a[]={'c','o','d','e','f','r','s'}
    if(!a[0])
        cout<<"NO\n";
    else
        cout<<"Yes\n";
    return  0;
}
#include <iostream>
using namespace std;

int main() {
    char a[] = {'c', 'o', 'd', 'e', 'f', 'r', 's'};  // Corrected the declaration

    if (!a[0]) {  // Corrected the condition
        cout << "NO\n";
    } else {
        cout << "Yes\n";  // Changed "Yes" to "Yes" for consistency
    }

    return 0;
}
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the digits :";
    int t;cin>>t;
    while (t--)
    {
        char a;//[] = {'c', 'o', 'd', 'e', 'f', 'r', 's'};  // Corrected the declaration
        cin>>a;
        if (a =='c' || a =='o'||a =='d'||a =='e'||a =='f'||a =='r'||a =='s')
        {  // Corrected the condition
            cout << "Yes\n";
        }
        else
        {
            cout << "NO\n";  // Changed "Yes" to "Yes" for consistency
        }
    }
    return 0;
}
