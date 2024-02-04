// 3. Write a C program to create a number variable. Create a pointer variable for this
// number variable. Create another pointer-to-pointer variable. Display the address
// and value of all the variables including pointer variables.

#include<stdio.h>

int main(){

    int a = 10;

    int *p;

    p = &a;

    printf("\nA value : %d",a);
    printf("\nA address : %d\n",&a);

    printf("\nP address : %d",&p);
    printf("\nA address : %d\n",p);

    int **q;
    q = &p;
    printf("\nQ address : %d",&q);
    printf("\nP address : %d",q);

    return 0;
}