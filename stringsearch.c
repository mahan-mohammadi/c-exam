#include <stdio.h>

int main() {
    char str[1000], word[10];
    int wordCount = 0, letterCount = 0, match = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the word you want to search: ");
    gets(word);


    int i = 0, j, k;
    while (str[i] != '\0') {

        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            letterCount++;
        }

        if ((str[i] != ' ' && str[i] != '\t') &&
            (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t')) {
            wordCount++;
        }

        i++;
    }

    i = 0;
    while (str[i] != '\0') {
        for (j = i, k = 0; word[k] != '\0' && str[j] == word[k]; j++, k++);
        if (word[k] == '\0' && (str[j] == ' ' || str[j] == '\0' || str[j] == '\t') &&
            (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t')) {
            match++;
        }

        i++;
    }

    printf("Number of words: %d\n", wordCount);
    printf("Number of letters: %d\n", letterCount);
    printf("Occurrences of the word '%s': %d\n", word, match);

    return 0;
}
