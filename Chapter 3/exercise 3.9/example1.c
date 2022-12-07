#include<stdio.h>
#include<conio.h>
int main()
{

    int num1,num2;
    char ch;

    printf("Do you want to:\n");
    printf("Add,Subtraction,Multipy or Divide?\n");
    do{
        printf("\nEnter First letter:");
        ch=getche();
    }while(ch!='A'&& ch!='S' && ch!='M' && ch!='D');

    printf("\nEnter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);

    switch (ch)
    {
    case 'A': printf("Sum=%d",num1+num2);            
        break;
    case 'S': printf("Subtraction=%d",num1-num2);            
        break;
    case 'M': printf("Multiplication=%d",num1*num2);            
        break;
    case 'D': if(num2!=0)
                printf("Division=%d",num1/num2); 
            else
                printf("Can not divide by zero");           
        break;
    }

    return 0;
}