#include<stdio.h>
int main()
{
    int n1,n2,temp,gcd;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&n1,&n2);
    if (n1>n2)
    {
        temp = n1;
    }
    else
    {
        temp = n2;
    }

    for(int i=1 ; i<=temp; i++)
    {
        if (n1%i==0 && n2%i == 0)
        {
            gcd = i;
        }
    }
    printf("%d",gcd);
    return 0;
}