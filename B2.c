#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    int i;
    for (i = 0; i < strlen(str); i++) {
        printf("%c ", str[i]);
    }
    return 0;
}
