#include<stdio.h>
int main()
{
    int rows;
    scanf("%d",&rows);
    for(int i = 1;i<=rows;i++)
    {
        for(int s=0;s<=rows-i;s++)
            printf(" ");
        for(int k=1;k<=i;k++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}