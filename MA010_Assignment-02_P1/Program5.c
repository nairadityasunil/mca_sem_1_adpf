#include <stdio.h>

int main() {
    // Input the size of the sequence (N)
    int N;
    scanf("%d", &N);

    // Input the sequence of numbers
    int sequence[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &sequence[i]);
    }

    // Count the number of distinct elements
    int distinctCount = 0;

    for (int i = 0; i < N; ++i) {
        // Check if the current element is distinct
        int isDistinct = 1;

        for (int j = 0; j < i; ++j) {
            if (sequence[i] == sequence[j]) {
                isDistinct = 0;
                break;
            }
        }

        // Increment the count if the element is distinct
        if (isDistinct) {
            distinctCount++;
        }
    }

    // Output the result
    printf("%d\n", distinctCount);

    return 0;
}