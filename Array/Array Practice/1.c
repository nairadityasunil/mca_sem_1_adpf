// #include<stdio.h>
// #define b 5
// int main()
// {
//     int a[5]={1,2,3,4,5,6,7};
//     int x=5;
//     int c=10;
//     for(int i=0;i<7;i++)
//     {
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char a[5] = {'A', 'B', 'C', 'D', 'E'};

//     int i,j,m;
//     i=++a[1]-60;
//     for(int z=0;z<5;z++)
//         printf("%c\n",a[z]);
//     j=a[1]++;
//     m=a[i++];
//     // printf("%d %d %d",i,j,m);
//     printf("%d",j);
//     return 0;
// }

#include<stdio.h>
int main() 
{
    int c;#include<stdio.h>
int main() 
{
    int c;
    c = getchar();
    int word = 1;
    int count = 0;
    while (c != EOF) 
    {
        if (c == ' ' || c == ',' || c == ';' || c == '\t' || c == '.') 
        {
            word = 0;
        } 
        else 
        {
            if (word == 0) 
            {
                count++;
            }
            word = 1; 
        }
        c = getchar();
    }
    printf("%d", count);
    return 0;
}



    c = getchar();
    int word = 1;
    int count = 0;
    while (c != EOF) 
    {
        if (c == ' ' || c == ',' || c == ';' || c == '\t' || c == '.') 
        {
            word = 0;
        } 
        else 
        {
            if (word == 0) 
            {
                count++;
            }
            word = 1; 
        }
        c = getchar();
    }
    printf("%d", count);
    return 0;
}




// #include<stdio.h>
// #include<string.h>
// int main()
// {
    // Compile time error
    // int ary[4]={1,2,3,4};
    // int p[4];
    // p=ary;
    // printf("%d",p[1]);

    // None of the above as there is no for loop to print the string
    // char p[40];
    // char s[40]="Students";
    // int length = strlen(s);
    // // printf("%d\n",length);
    // for (int i=0;i<length;i++)
    //     p[i]=s[length-(i)];
    // printf("%s",p);

    // for (int i=0;i<length;i++)
    //     printf("%c",p[i]);
    
    // float v1 = 1.1;
    // double v2 = 1.1;
    // if(v1==v2)
    // {
    //     printf("hello");
    // }
    // else 
    // {
    //     printf("hi");
    // }

//     return 0;
// }