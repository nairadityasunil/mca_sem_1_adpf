#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int lnum = arr[0];
    int snum = arr[0];

    for (i=0;i<5;i++)
    {
        if(arr[i]>lnum)
        {
            lnum = arr[i];
        }
        else
        {
            snum = arr[i];
        }
    }

    printf("Largest Number :  %d\n",lnum);
    printf("Smallest Number : %d",snum);

    return 0;
}