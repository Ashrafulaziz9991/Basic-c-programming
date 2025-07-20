#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n); // read the number of words
    char word[101]; // assume each word is at most 100 characters long

    for (int i = 0; i < n; i++) {
        scanf("%s", word); // read the next word
        int len = strlen(word);

        if (len <= 10) {
            printf("%s\n", word); // if the word is not too long, print it as is
        } else {
            printf("%c%d%c\n", word[0], len - 2, word[len - 1]); // print the abbreviation
        }
    }

    return 0;
}
