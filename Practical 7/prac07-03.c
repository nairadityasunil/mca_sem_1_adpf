#include<stdio.h>
int main()
{
    int a=0, b=1,c;
    int num;
    printf("Enter number of elements : ");
    scanf("%d",&num); 
    printf("%d %d ",a,b);
    for(int i=0;i<num-2;i++)
    {
        c = b + a;
        printf("%d ",c);
        a = b;
        b = c;
    }
    return 0;
}