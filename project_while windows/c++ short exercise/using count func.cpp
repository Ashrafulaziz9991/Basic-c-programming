#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 2, 3, 2, 4, 2, 5};

    int targetValue = 2;
    int targetValue2 = 10;
    int occurrences = count(numbers.begin(), numbers.end(), targetValue);
    int occurrences2 = count(numbers.begin(), numbers.end(), targetValue2)

    //cout << "The value " << targetValue << " appears " << occurrences << " times." << endl;
    //cout << "The value " << targetValue2 << " appears " << occurrences2 << " times." << endl;
    //cout<<occurrences<<endl;
    //cout<<occurrences2<<endl;
    int a[occurrences];
    for (int i=0;i<occurrences;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

