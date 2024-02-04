// Assignment 1 Question 2
#include<stdio.h>
int main()
{
    int M,N;
    scanf("%d %d", &M, &N);
    if (M%N==0)
    {
        printf("%d",M/N);
    }
    else
    {
        printf("0");
    }
    return 0;
}