#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int r=0;r<n;r++)
    {
        for(int s=0;s<n-r;s++)
            printf(" ");
            
        for (int st=0;st<(2*r)+1;st++)
            printf("*");
            
        printf("\n");
    }
    for (int r=1;r<=n-1;r++)
    {
        for(int s=0;s<=r;s++)
            printf(" ");
            
        for (int st=0;st<(2*(n-r))-1;st++)
            printf("*");
        printf("\n");
    }
    return 0;
}


// #include<stdio.h>
// int main(){

//     int n=5;
//     int k=n;

//     for(int m=1; m<=n+1 ; m++ ){
//         printf("* ");
//     }

//     printf("\n");

//     for(int i=1 ; i<=n ; i++){
//     {
//         for(int j=1 ; j<=k ; j++){

//             if(j==1 || j==k-1){
//                 printf("* ");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         k= k-1;
//         printf("\n");
//     }

//     return 0;

//     }}
