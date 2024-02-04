#include <stdio.h>
int main()
{
    float arr[30];
    for (int i = 0; i <= 30; i++)
    {
        scanf("%f", &arr[i]);
        if (arr[i] == -1)
        {
            break;
        }           
    }
    int i = 2;
    while (arr[i] != -1)
    {
        printf("%.1f ", (arr[i] + arr[i - 1] + arr[(i++) - 2]) / 3);
    }
    return 0;
}   