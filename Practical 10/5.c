// 5. Write a program to create a value array and another pointer array. Both array
// sizes should be 5. Now store some values in the value array. Then store the
// address of these five elements in the pointer array. Then print the address and
// value of each of the pointer arrays.

#include<stdio.h>

int main(){

    int a[5],*b[5];

    printf("Enter 5 int value : ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    printf("\nValue Array : ");
    for(int i=0;i<5;i++){
        printf("\n%d",a[i]);
    }

    printf("\nAddress Array : ");
    for(int i=0;i<5;i++){
        printf("\n%d",&a[i]);
    }

    return 0;
}