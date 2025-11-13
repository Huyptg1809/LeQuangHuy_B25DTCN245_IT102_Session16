#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "Hello my gmail is test123@gmail.com";
    int letter = 0, digit = 0, special = 0, i;
    for (i = 0; i < strlen(str); i++) {
        if (isalpha(str[i]))
            letter++;
        else if (isdigit(str[i]))
            digit++;
        else if (str[i] != ' ')
            special++;
    }
    printf("So ky tu la chu cai: %d\n", letter);
    printf("So ky tu la chu so: %d\n", digit);
    printf("So ky tu dac biet: %d\n", special);
    return 0;
}
