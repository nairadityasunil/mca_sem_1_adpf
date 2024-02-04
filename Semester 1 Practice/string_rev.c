#include<stdio.h>
int main()
{
    char a[100];

    printf("Enter String :");
    scanf("%s",a);

    int i = 0,count = 0;
    while(a[i]!='\0')
    {
        count++;
        i++;
    }

    for(int j=count;j>=0;j--)
    {
        printf("%c",a[j]);
    }
    return 0;
}