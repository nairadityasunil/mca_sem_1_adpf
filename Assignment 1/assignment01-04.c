// Assignment 1 Question 4
#include<stdio.h>
int main()
{
    int count=0,i=0;
    static int a=-1;
    while(1)
    {
        scanf("%d",&i);
        if (i==-1)
        {
            break;
        }


        if (i!=a)
        {
            count ++;
            a = i;
        }
    }
    printf("%d",count);
    return 0;
}