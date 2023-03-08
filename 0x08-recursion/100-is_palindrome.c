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

    r = is_palindrome("");
    printf("%d\n", r);
    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    
    return 0;
}
