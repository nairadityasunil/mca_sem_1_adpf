/*
Write a C program to accept a number and check whether it is a binary number or octal
number. Display appropriate messages.
*/

#include <stdio.h>
// To check if the number is binary
int is_binary(int a)
{
    int rem = 0;
    while (a > 0)
    {
        rem = a % 10;
        if (rem != 0 && rem != 1)
        {
            return 0;
        }
        a = a / 10;
    }
    return 1;
}

// To check if the number is octal
int is_octal(int a)
{
    int rem = 0;
    while (a > 0)
    {
        rem = a % 10;
        if (rem < 0 || rem > 7)
        {
            return 0;
        }
        a = a / 10;
    }
    return 1;
}
int main()
{
    int input, rem;
    scanf("%d", &input);
    if(is_binary(input))
    {
        printf("Binary Number.");
    }
    else if(is_octal(input))
    {
        printf("Octal Number.");
    }
    else 
    {
        printf("Neither Binary Nor Octal Number.");
    }
    return 0;
}