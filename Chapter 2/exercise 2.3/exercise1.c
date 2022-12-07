#include<stdio.h>

int main() {

int num1,num2,choice;

printf("Choose an operation:\n");
printf("1:Addition\n2:Subtraction\n");
   printf("Enter your choice:");
    scanf("%d",&choice);

if(choice==1) {
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    printf("Sum of the two number:%d",num1+num2);

}  else {
        printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    printf("Subtraction of the two number:%d",num1-num2);

   }

return 0;
}