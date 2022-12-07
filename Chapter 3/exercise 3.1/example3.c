#include<stdio.h>

int main()
{
    char ch;
    printf("Do you wish to continue?(Y/N):");
    ch=getchar();

    if(ch=='Y'){
        printf("HELLO WORLD");
    }

    return 0;
}