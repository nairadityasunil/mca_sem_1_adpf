#include<stdio.h>
int main()
{
    int rows;
    scanf("%d",&rows);
    for (int i=0;i<rows;i++)
    {
        if(i==0)
        {
            for(int l=0;l<=rows;l++)
            {
                printf("*");
            }
        }
        else
        {
            for(int j=1;j<=rows-i;j++)
            {
                if(j==1 || j==rows-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");

    }

    return 0;
}