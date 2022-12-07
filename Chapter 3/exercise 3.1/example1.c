#include<stdio.h>
#include<conio.h>

int main()
{

    char ch;
    printf("Enter a character:");
    ch=getche(); //read a character
    //ch=getchar();
    printf("The ASCII code of the character %d\n",ch);

    return 0;
}