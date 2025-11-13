#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Chuoi vua nhap la: %s\n", str);
    printf("Do dai chuoi la: %lu\n", strlen(str));

    return 0;
}
