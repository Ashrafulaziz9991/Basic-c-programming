#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, j;
    cin >> N;      // assuming input is 3 but it would be different

    int A[N + 1][N + 1];
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N; j++)
        {
            A[i][j] = -1;
        }
    }
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
