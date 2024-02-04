#include<stdio.h>
int main()
{
    int units,customer_no;
    float amount;
    printf("Enter Customer Number : ");
    scanf("%d",&customer_no);
    printf("Enter Units Consumed : ");
    scanf("%d",&units);
    printf("\n\nCustomer Number : %d\n\n",customer_no);
    printf("Units : %d\n",units);
    if(units<=100)
    {
        amount = units * 75;
        printf("Rs. 0.75 per unit.\n");
    }
    else if(units<=300)
    {
        amount = (units-100)*1 + 75;
        printf("Rs. 75 plus Rs. 1.00 per unit excess of 100.\n");
    }
    else if(units<=500)
    {
        amount = (units-300)*1.5 + 275;
        printf("Rs. 275 plus Rs. 1.50 per unit excess of 300.\n");
    }
    else
    {
        amount = (units - 500)*1.75 + 575;
        printf("Rs. 575 plus Rs. 1.75 per unit excess of 500.\n");
    }
    printf("Amount : %.2f",amount);
    return 0;
}