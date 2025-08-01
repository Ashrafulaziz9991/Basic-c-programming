#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int count_triangles(int n, vector<int>& sticks) {
    sort(sticks.begin(), sticks.end());

    int count = 0;
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (sticks[i] + sticks[j] > sticks[k]) {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> sticks(n);
        for (int i = 0; i < n; ++i) {
            cin >> sticks[i];
            sticks[i] *= 2; // Multiply by 2 to get the actual stick length
        }

        int result = count_triangles(n, sticks);
        cout << result << endl;
    }

    return 0;
}

