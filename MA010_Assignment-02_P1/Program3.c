#include <stdio.h>
int main() {
    int c;
    int wordCount = 0;
    int inWord = 0;

    // Read characters until EOF is encountered
    while ((c = getchar()) != EOF) {
        // Check if the current character is a space, tab, or semicolon
        if (c == ' ' || c == '\t' || c == ';') {
            // If we were in a word, mark the end of the word
            if (inWord) {
                inWord = 0;
                wordCount++;
            }
        } else if (c == '.' || c == ',') {
            // Ignore commas and periods
        } else {
            // If the current character is not a separator, mark that we are in a word
            inWord = 1;
        }
    }

    // Check for the last word if the line doesn't end with a separator
    if (inWord) {
        wordCount++;
    }

    // Print the number of words
    printf("%d\n", wordCount);

    return 0;
}