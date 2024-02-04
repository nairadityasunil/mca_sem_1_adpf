#include <stdio.h>

int find_even(int k);

int main() {
    int k;
    scanf("%d", &k);
    int n;
    int count = 0;

    while (1) {
        scanf("%d", &n);
        if (n == -1) {
            break;
        }
        if (n % 2 == 0) {
            count++;
            if (count == k) {
                printf("%d\n", n);
                return 0;
            }
        }
    }
    printf("-1\n");
    return 0;
}

int find_even(int k) {
  
    return 0;
}
