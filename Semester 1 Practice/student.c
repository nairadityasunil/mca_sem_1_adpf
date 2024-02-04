#include <stdio.h>
struct stud
{
    int roll;
    char name[10];
    int total;
} s1;
int main()
{
    int c;
    FILE *file1 = NULL;
    while (1)
    {
        getchar();
        
        printf("Enter Choise :");
        scanf("%d", &c);
        if (c == 0)
        {
            break;
        }
        else if (c == 1)
        {
            file1 = fopen("stud_db", "a");
            printf("Enter Name : ");
            scanf("%s", s1.name);
            printf("Enter Roll : ");
            scanf("%d", &s1.roll);
            printf("Enter Total : ");
            scanf("%d", &s1.total);
            fprintf(file1, "\nRoll : %d\n", s1.roll);
            fprintf(file1, "Name : %s\n", s1.name);
            fprintf(file1, "Total : %d\n\n", s1.total);
            fclose(file1);
        }
        else if (c == 2)
        {
            FILE *file1 = NULL;
            file1 = fopen("stud_db", "r");
            char ch;
            while (!feof(file1))
            {
                ch = fgetc(file1);
                if (ch != EOF)
                {
                    printf("%c", ch);
                }
            }
        }
    }
    return 0;
}