#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "Hello 123 World!";
    int count = 0, i;
    for (i = 0; i < strlen(str); i++) {
        if (isalpha(str[i]))
            count++;
    }
    printf("So ky tu la chu cai trong chuoi la: %d\n", count);
    return 0;
}
