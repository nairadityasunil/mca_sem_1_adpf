// Assignement 1 Question 5
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
    if (count>=2)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}