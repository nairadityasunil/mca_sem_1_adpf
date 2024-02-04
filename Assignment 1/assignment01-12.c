#include<stdio.h>
int main()
{
    int x,y;
    int result = 0;
    scanf("%d %d",&x,&y);
    for (int i=1; i<=y;i++)
    {
        result = result +x;
    }
    printf("Multiply : %d",result);
    return 0;
}