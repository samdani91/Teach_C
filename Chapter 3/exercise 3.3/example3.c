#include<stdio.h>
#include<conio.h>

int main()
{

    char ch;
    for(ch=getchar();ch!='q';ch=getche()){
        printf("Found the q\n");
    }

    return 0;
}