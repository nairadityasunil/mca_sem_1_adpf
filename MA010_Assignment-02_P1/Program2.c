#include <stdio.h>

int main() {
    int a = 3;
    double size[a];
    double no;

    for (int i = 0; i < a; ++i) {
        scanf("%lf", &size[i]);
    }

    while (1) {
   
        scanf("%lf", &no);

        if (no == -1) {
            break;
        }

        for (int i = 0; i < a - 1; ++i) {
            size[i] = size[i + 1];
        }

        size[a - 1] = no;

        double sum = 0.0;
        for (int i = 0; i < a; ++i) {
            sum += size[i];
        }

        double mavg = sum / a;
        printf("%.1lf ", mavg);
    }

    return 0;
}
