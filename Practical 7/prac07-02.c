#include<stdio.h>
int main()
{
    int num, rem, temp = 0;
    scanf("%d",&num);
    while(num>0)
    {
        rem = num%10;
        if (rem > temp)
        {
             temp = rem;
        }
        num = num/10;
    }
    printf("Highest = %d",temp);
    return 0;
}