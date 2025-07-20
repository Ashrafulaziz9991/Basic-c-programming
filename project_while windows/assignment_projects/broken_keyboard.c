#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    fgets(s, sizeof(s), stdin);
    int i = 0;
    int count = 1;

    while (s[i] != '\0') {
        if (count == 1) {
            printf("%c", s[i]);
        }

        count = (count % 2) + 1;  // Alternate between 1 and 2

        i++;
    }

    printf("%s", s);  // Prints the original string

    return 0;
}
