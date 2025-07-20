#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    int k;
    cin >> k;

    int counter = 0;

    // woks as merge function
    sort(vec.begin(), vec.end());

    int left = 0, right = vec.size() - 1, sum = 0;

    while (left < right)
    {
        sum = vec[left] + vec[right];
        if (sum == k)
        {
            counter++, left++, right--;
        }
        else if (sum > k)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    cout << counter;

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& arr, int k) {
    int n = arr.size();
    int count = 0;

    // Perform merge sort
    sort(arr.begin(), arr.end());

    // Use two pointers to find pairs that sum to k
    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == k) {
            count++;
            left++;
            right--;
        } else if (sum < k) {
            left++;
        } else {
            right--;
        }
    }

    return count;
}

int main() {
    int n, k;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;

    int result = countPairs(arr, k);
    cout << result << endl;

    return 0;
}
*/
