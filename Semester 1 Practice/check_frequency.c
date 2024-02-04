/*
Write a C program to accept an integer array of N elements. Calculate and display frequency 
of positive, negative and zero.
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of elements : ");
    scanf("%d",&n);
    int in_arr[n-1];
    int i,positive=0,negative=0,zero=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&in_arr[i]);
        if(in_arr[i]>0)
        {
            positive++;
        }
        else if(in_arr[i]<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("Positive Numbers : %d\n",positive);
    printf("Negative Numbers : %d\n",negative);
    printf("Zeros : %d",zero);


    return 0;
}