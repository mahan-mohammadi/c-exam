#include <stdio.h>

void main() {
    int num = 25;
    int k = 0;
    int i = 1;  // Position multiplier starts at 1 (10^0)

    for (; num > 0; num /= 2) {
        k = k + (num % 2) * i;
        i *= 10;  // Move to the next decimal place
    }
    printf("%d", k);
}