// Assignment 1 question 7
#include<stdio.h>
int main()
{
    int num,i=0;
    int fact = 1;
    scanf("%d",&num);
    while(i<num)
    {
        fact = fact * (num-i);
        i++;
    }

    printf("The Factorial of %d is : %d",num,fact);
    return 0;
}
