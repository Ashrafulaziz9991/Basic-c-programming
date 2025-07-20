/**
#include <bits/stdc++.h>
using namespace std;

vector<int> Quick_sort(vector<int> x)
{
    if (x.size() <= 1)
        return x;

    int pivot = rand()%(x.size());
    vector<int> left_vec;
    vector<int> right_vec;

    for (int i = 0; i < x.size(); i++)
    {
        if (i == pivot)
        {
            continue;
        }
        else if (x[i] <= x[pivot])
        {
            left_vec.push_back(x[i]);
        }
        else
        {
            right_vec.push_back(x[i]);
        }
    }

    vector<int> sorted_left = Quick_sort(left_vec);
    vector<int> sorted_right = Quick_sort(right_vec);

    vector<int> sorted_vec;

    for (int i = 0; i < sorted_left.size(); i++)
    {
        sorted_vec.push_back(sorted_left[i]);
    }

    sorted_vec.push_back(x[pivot]);

    for (int i = 0; i < sorted_right.size(); i++)
    {
        sorted_vec.push_back(sorted_right[i]);
    }

    return sorted_vec;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vec = {1, 9, 8, 7, 0, 5, 6, 3, 4};

    vector<int> sorted_vec = Quick_sort(vec);
    for (auto i : sorted_vec)
    {
        cout << i << " ";
    }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> Quick_sort(vector<int> x)
{
    if (x.size() <= 1)
        return x;

    int pivot = rand() % (x.size());
    vector<int> left_vec;
    vector<int> right_vec;

    for (int i = 0; i < x.size(); i++)
    {
        if (i == pivot)
        {
            continue;
        }
        else if (x[i] >= x[pivot])
        {
            left_vec.push_back(x[i]);
        }
        else
        {
            right_vec.push_back(x[i]);
        }
    }

    vector<int> sorted_left = Quick_sort(left_vec);
    vector<int> sorted_right = Quick_sort(right_vec);

    vector<int> sorted_vec;

    for (int i = 0; i < sorted_left.size(); i++)
    {
        sorted_vec.push_back(sorted_left[i]);
    }

    sorted_vec.push_back(x[pivot]);

    for (int i = 0; i < sorted_right.size(); i++)
    {
        sorted_vec.push_back(sorted_right[i]);
    }
    return sorted_vec;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    vector<int> sorted_vec = Quick_sort(vec);
    for (auto i : sorted_vec)
    {
        cout << i << " ";
    }
    return 0;
}
