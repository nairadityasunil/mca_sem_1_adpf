// Assignment 1 Question 8
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int last_digit = num % 10;
    while (num >= 10)
    {
        num = num / 10;
    }
    printf("Sum of First and Last Digit = %d",num+last_digit);
    return 0;
}