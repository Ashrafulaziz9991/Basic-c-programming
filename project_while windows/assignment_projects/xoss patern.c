#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    if (n == 1) {
        printf("1");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    printf("\n");

    for (i = 2; i <= n - 1; i++) {
        printf("%d", i);
        for (j = 2; j <= n - 1; j++) {
            if (j == i || j == n - i + 1) {
                printf(" ");
            } else {
                printf("%d", j);
            }
        }
        printf("%d\n", n);
    }

    for (i = 1; i <= n; i++) {
        printf("%d", n);
    }
    printf("\n");

    return 0;
}
