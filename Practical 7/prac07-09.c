#include<stdio.h>
int main()
{
    int arr[5 ];
    int i;
    // collecting array elements
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }


    int arr1[5];
    int arr2[5];
    // finding duplicates
    for(i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if(arr[i]==arr1[j])
            {
                printf("%d",arr[i]);
            }
        }
    }
    return 0;
}