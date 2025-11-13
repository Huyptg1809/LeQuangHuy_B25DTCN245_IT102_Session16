#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0, i;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; i < strlen(str); i++) {
        if ((str[i] != ' ' && (i == 0 || str[i - 1] == ' ')))
            count++;
    }
    printf("%d\n", count);
    return 0;
}
