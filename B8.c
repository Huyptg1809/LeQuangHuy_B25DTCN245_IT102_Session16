#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "hello world";
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (i == 0 || str[i - 1] == ' ')
            str[i] = toupper(str[i]);
    }
    printf("%s\n", str);
    return 0;
}
