#include<stdio.h>
int fact(int n);
int main()
{

    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Factorial=%d\n",fact(num));

    return 0;
}
int fact(int n){
    int x;
    if(n==0) return 1;
    else {
       return n*fact(n-1); 
    }
}