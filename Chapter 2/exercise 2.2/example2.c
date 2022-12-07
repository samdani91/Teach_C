#include <stdio.h>
#include <stdlib.h>

int main()
{


    int n1,n2;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);

    if (n2==0) {
        printf("Can not divide by zero");
    } else {
           printf("Division result:%d",n1/n2);
    }

    return 0;
}
