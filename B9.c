#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello world";
    char ch;
    char result[100];
    int i, j = 0;
    
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);
    
    for (i = 0; i < strlen(str); i++) {
        if (str[i] != ch) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    
    printf("%s\n", result);
    return 0;
}
