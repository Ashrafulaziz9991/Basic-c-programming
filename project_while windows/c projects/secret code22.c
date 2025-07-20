#include<stdio.h>
#include<math.h>

int is_prime(n)
{
    if (n <= 1) return 0;
    int m = sqrt(n);
    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        if (n == 1 || is_prime(n))
        {
            printf("Yes\n");

        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
