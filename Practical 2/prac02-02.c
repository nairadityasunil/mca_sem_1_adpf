#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    (num==0)?printf("0 Entered"):(num>0?printf("Positive Number"):printf("Negative Number"));
    return 0;
}