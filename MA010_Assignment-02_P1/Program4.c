#include <stdio.h>

int main() {
    // Input size and elements of the first array
    int N1;
    scanf("%d", &N1);

    int arr1[N1];
    for (int i = 0; i < N1; ++i) {
        scanf("%d", &arr1[i]);
    }

    // Input size and elements of the second array
    int N2;
    scanf("%d", &N2);

    int arr2[N2];
    for (int i = 0; i < N2; ++i) {
        scanf("%d", &arr2[i]);
    }

    // Find the smallest number in the first array not present in the second
    int smallestNotInSecond = -1;

    for (int i = 0; i < N1; ++i) {
        int found = 0;

        for (int j = 0; j < N2; ++j) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }

        if (!found && (smallestNotInSecond == -1 || arr1[i] < smallestNotInSecond)) {
            smallestNotInSecond = arr1[i];
        }
    }

    // Output the result
    if (smallestNotInSecond != -1) {
        printf("Output:%d\n", smallestNotInSecond);
    } else {
        printf("NO\n");
    }

    return 0;
}