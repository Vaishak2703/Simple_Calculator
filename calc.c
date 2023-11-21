#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){
    int a,b,n;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    printf("Addition of the values is %d",a+b);
    printf("\nDifference of the values is %d",a-b);
    printf("\nMultiplication of the value is %d",a*b);
    printf("\nDivision of the value is %d",a/b);
    printf("\nEnter another number: ");
    scanf("%d",&a);
    printf("\nEnter the selection(1 - sin, 2 - cos and 3 - tan): ");
    scanf("%d",&n);
    switch(n){
        case 1: printf("sin(%d) = %f",a,sin(a));
        break;
        case 2: printf("cos(%d) = %f",a,cos(a));
        break;
        case 3: printf("tan(%d) = %f",a,tan(a));
        break;
        default: printf("Invalid selection");
        break;
    }
    getch();
    //final code
}
