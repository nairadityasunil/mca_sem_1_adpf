#include<stdio.h>
int main()
{
    int num,rem,count=0;
    scanf("%d",&num);
    while (num>0)
    {
        rem = num%10;
        if(rem!=0&&rem!=1)
        {
            count++;
            break;
        }
        else
        {
            num = num/10;
        }
    }
    if(count)
    {
        printf("Not a binary number");
    }
    else
    {
        printf("Binary number");
    }
    return 0;
}