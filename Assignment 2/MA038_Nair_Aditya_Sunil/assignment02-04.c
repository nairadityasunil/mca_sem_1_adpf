#include <stdio.h>

int find(int arr1[], int n1, int arr2[], int n2) {
    int temp = -1;

    for (int i = 0; i < n1; i++) {
        int found = 0;

        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }

        if (!found && (temp == -1 || arr1[i] < temp)) {
            temp = arr1[i];
        }
    }

    return temp;
}

int main() {
    int n1, n2;
    scanf("%d", &n1);

    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int result = find(arr1, n1, arr2, n2);

    if (result == -1) {
        printf("NO\n");
    } else {
        printf("%d\n", result);
    }

    return 0;
}
