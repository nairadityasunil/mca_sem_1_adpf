#include<stdio.h>
int main()
{
    int a[5]={5,3,2,4,1};
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i =0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}