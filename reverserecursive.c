#include <stdio.h>

void reverse(char* str) {
    if (*str == '\0') {
        return;
    }
    reverse(str + 1);
    printf("%c", *str);
}

int main() {
    char str[] = "hello";
    reverse(str); 
    return 0;
}
