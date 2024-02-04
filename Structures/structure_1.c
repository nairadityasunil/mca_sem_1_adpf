// Practical 1 of structures
#include<stdio.h>
#include<string.h>
struct student      // Declaring Structure
{
    char name[30];
    int roll_no;
    int age;
};
int main()
{
    struct student s1;      // Declaring structure objects
    printf("Roll : ");
    scanf("%d" , &s1.roll_no); 
    printf("Name : ");
    scanf("%s" , s1.name);
    printf("Age : ");
    scanf("%d" , &s1.age);

    printf("Roll No. : %d\n" , s1.roll_no);
    printf("Name : %s\n", s1.name);
    printf("Age : %d\n" , s1.age);
    return 0;
}

// structure elements are accessed using period(.) operator.
// & is not required while taking string input