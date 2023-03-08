#include <stdio.h>
#include <string.h>

int is_palindrome(char *s) {
    int len = strlen(s);
    for (int i = 0; i < len/2; i++) {
        if (s[i] != s[len-1-i]) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int r;

    r = is_palindrome("abcddcba");
    printf("%d\n", r);

    return 0;
}
