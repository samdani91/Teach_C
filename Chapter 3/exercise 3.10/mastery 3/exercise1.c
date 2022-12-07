#include<stdio.h>
#include<conio.h>
int main()
{

    char ch;
    //printf("Enter a lowercase letter:");
     for(int i=0;;i++){
        printf("Enter a lowercase letter:");
        ch=getche();
        if(ch=='\r'){
            break;
        }
        printf("\nUppercase letter is %c\n",ch-32);
     }

    return 0;
}