// 4. Write a C program to create an array of 15 elements. create a pointer which
// points to an array. Now print the base address of the array. Then display the
// array elements using pointer arithmetic.

#include<stdio.h>

int main(){

    int a[15];

    int *as = &a[0];

    printf("Enter Array Value : ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    printf("\nBase Address : %d",as);
    printf("\nBase: %d",&a[0]);
    printf("\nValue : %d",*as);

    int *add = a;

    printf("\nArithmatic Address : "); 
    for(int i=0;i<5;i++){
        printf("\n%d",*(add+i));
    }

    return 0;
}