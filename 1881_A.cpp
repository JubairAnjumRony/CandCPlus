#include <stdio.h>
#include <string.h>

int bruteForcePatternMatching(char* text, char* pattern) {
    int textLen = strlen(text);
    int patternLen = strlen(pattern);

    for (int i = 0; i <= textLen - patternLen; i++) {
        int j;

        // Check if the current substring of text matches the pattern
        for (j = 0; j < patternLen; j++) {
            if (text[i + j] != pattern[j])
                break;
        }

        // If we found a match, print the starting index
        if (j == patternLen) {
            printf("Pattern found at index %d\n", i);
        }
        //printf("%d",i);
    }
    return 0;
}

int main() {
    char text[] = "This is a simple example of pattern matching.";
    char pattern[] = "example";

    printf("Text: %s\n", text);
    printf("Pattern: %s\n", pattern);

    bruteForcePatternMatching(text, pattern);

    return 0;
}
