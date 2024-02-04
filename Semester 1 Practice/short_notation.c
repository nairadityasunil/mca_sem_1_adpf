/*
Write a C program to accept two strings sl and s2. String sl contains the shorthand notation
indicating first character or digit, a hyphen and the last character or digit (for example a-z or
A-T or 0-5 etc). Expand this shorthand notation to the complete list and store it in s2 (i.e.
abc...xyz or ABC... T or 012345). Also display the complete list.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void *print_range(char *s1, char *s2)
{
    int start = (int)s1[0];
    int end = (int)s1[2];
    if (start > end)
    {
        printf("Enter Correct Range");
        return 0;
    }
    else
    {
        int j = 0;
        for (int i = start; i <= end; i++)
        {
            s2[j] = '\0' + i;
            j++;
        }
    }
}
int main()
{
    char s1[3];
    char s2[128];
    printf("Enter Range Seperated By Hypen : ");
    scanf(" %s", s1);

    if (s1[1] != '-')
    {
        printf("Invalid Seperator Used.");
    }
    else
    {
        print_range(s1, s2);
        int length = strlen(s2);
        for (int i = 0; i < length; i++)
        {
            printf("%c", s2[i]);
        }
    }
    return 0;
}