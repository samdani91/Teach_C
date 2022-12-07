#include<stdio.h>

int main()
{

    int num1,num2;
    char ch;
    printf("Do you want to:\n");
    printf("Add,Subtract,Multiplication or Divide?\n");
    printf("Enter first letter:");
    ch=getchar();
    printf("\n");

    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);

    if(ch=='A') printf("Sum=%d",num1+num2);
    else if(ch=='S') printf("Subtraction=%d",num1-num2);
    else if(ch=='M') printf("Multiplication=%d",num1*num2);
    else if(ch=='D' && num2!=0) printf("Divison=%d",num1/num2);
    
    return 0;
}