#include <stdio.h>

void copy1(char * const s1, const char * const s2) {
    int i;
    for (i = 0; (s1[i] = s2[i]) != '\0'; i++) { // we dont need to set the last element to \0 because it will be set to \0 first then compared
    }
}

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    copy1(destination, source);
    printf("Copied string: %s\n", destination);

    return 0;
}
