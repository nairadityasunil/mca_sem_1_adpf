/* Write a program to accept a character and check whether it is upper case, lower case or a  
 digit. [Do not use standard library function for checking.] */

 #include<stdio.h>
 int main()
 {
    char a;
    printf("Enter Character : ");
    scanf("%c",&a);

    int input = (int)a;

    if(input >= 65 && input <=90 )
    {
        printf("Upper Case.");
    }
    else if(input >= 97 && input <=122)
    {
        printf("Lower Case.");
    }
    else if(input >=48 && input <= 57)
    {
        printf("Digit.");
    }
    else
    {
        printf("Special Character.");
    }
    return 0;
 }