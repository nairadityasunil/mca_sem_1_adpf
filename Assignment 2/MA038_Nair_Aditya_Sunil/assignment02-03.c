#include<stdio.h>

int main() {
    int str;
    str = getchar();
    int count = 1;
    int i = 0;

    while (str != EOF) 
    {
        if (str == ' ' || str == ',' || str == ';' || str == '\t' || str == '.') 
        {
            count = 0;
        } 
        else 
        {
            if (count == 0) 
            {
                i++;
            }
            count = 1; 
        }
        str = getchar();
    }

    printf("%d\n", i);
    return 0;
}


