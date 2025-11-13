#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "bcdac";
    int count[256] = {0};
    int i;

    for (i = 0; i < strlen(str); i++) {
        count[(unsigned char)str[i]]++;
    }

    for (i = 0; i < strlen(str); i++) {
        if (count[(unsigned char)str[i]] != 0) {
            printf("%c: %d\n", str[i], count[(unsigned char)str[i]]);
            count[(unsigned char)str[i]] = 0;
        }
    }

    return 0;
}
