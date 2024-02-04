#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        int temp = 1;  
        for (int j = 0; j < i; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                temp = 0; 
                break;
            }
        }
        if (temp == 1) 
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
