#include<stdio.h>
int find_even(int k)
{
    int i;
    int count = 0;
    while (1)
    {
        scanf("%d",&i);
        if(i==-1)
        {
            break;
        }
        else
        {
            if(i%2==0)
            {
                count++;
                if(count==k)
                {
                    count=0;
                    return i;
                }
            }
        }
    }
    if(count==0)
    {
        i=-1;
        return i;
    }
}
int main()
{
    int k;
    scanf("%d\n",&k);
    printf("%d",find_even(k));
    return 0;
}