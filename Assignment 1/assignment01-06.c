// Assignmen 1 Question 6
#include<stdio.h>
int main()
{
    int s1,s2,s3;
    scanf("%d %d %d", &s1, &s2, &s3);
    if(!(s1+s2>s3)|| !(s2+s3>s1)|| !(s1+s3>s2))
    {
        printf("Triangle Can not be formed.");
    }
    else
    {
        if(s1==s2 && s2==s3)
        {
            printf("Equilateral Triangle");
        }
        else if(s1==s2 || s1==s3 || s2==s3)
        {
            printf("Isosceles Triangle");
        }
        else if((s1*s1+s2*s2==s3*s3) || (s2*s2+s3*s3==s1*s1) || (s1*s1+s3*s3==s2*s2))
        {
            printf("Right-Angled Triangle");
        }
        else
        {
            printf("Scalene Triangle");
        }
    }
    return 0;
}

