#include <stdio.h>

int main() {
    char s[21];  // string S
    int a, b, sum = 0;

    scanf("%s", s);
    scanf("%d %d", &a, &b);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '+') {
            sum += a + b;
        } else if (s[i] == '*') {
            sum += a * b;
        }
    }

    printf("%d", sum);

    return 0;
}

