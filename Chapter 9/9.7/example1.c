#include<stdio.h>

int main(int argc,char *argv[])
{

    char name[100],ch;
    printf("Enter name of the file to erase:");
    scanf("%s",name);
    printf("Are you sure?(y/n):");
    scanf(" %c",&ch);
    if(ch=='y') remove(name);

    return 0;
}