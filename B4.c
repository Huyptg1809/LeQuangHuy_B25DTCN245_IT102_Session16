#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello world";
    char ch;
    int count = 0, i;
    printf("Nhap mot ky tu: ");
    scanf("%c", &ch);
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch)
            count++;
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ch, count);
    return 0;
}
