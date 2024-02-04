#include<stdio.h>
int main()
{
    int num; 
    scanf("%d",&num);
    for(int i=0;i<=10;i++)
    {
        printf("%3d * %2d = %3d\n",num,i,num*i);
    }
    return 0;
}