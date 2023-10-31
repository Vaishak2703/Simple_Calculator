#include<stdio.h>
#include<math.h>
void main(){
    int a,b,n;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    printf("Addition of the values is %d",a+b);
    printf("\nDifference of the values is %d",a-b);
    printf("\nMultiplication of the value is %d",a*b);
    printf("\nDivision of the value is %d",a/b);
    printf("Enter the selection: ");
    scanf("%d",&n);
    switch(n){
        case 1: printf("sin(a) = %f",sin(a));
        break;
        case 2: printf("cos(a) = %f",cos(a));
        break;
        case 3: printf("tan(a) = %f",tan(a));
        break;
        default: printf("Invalid selection");
        break;
    }
}