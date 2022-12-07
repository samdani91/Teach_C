#include<stdio.h>

int main() {

float n1,n2;
    int choice;
    printf("Enter first number:");
    scanf("%f",&n1);
    printf("Enter second number:");
    scanf("%f",&n2);

    printf("1:Calculate product\n2:Calculate sum\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    if(choice==1) {
        printf("Product of the two number:%f",n1*n2);
    }   else {
        printf("Sum of the two number:%f",n1+n2);
    }

return 0;
}