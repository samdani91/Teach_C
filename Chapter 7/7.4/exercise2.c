#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    if(argc!=3){
        printf("You have to give two arguments");
        return 0;
    }
    
    int num1=atoi(argv[1]);
    int num2=atoi(argv[2]);
    printf("Sum is %d\n",num1+num2);

    return 0;
}