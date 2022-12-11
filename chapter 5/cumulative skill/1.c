#include<stdio.h>
#include<string.h>

int main()
{

    char str[100];
    printf("Enter your string:");
    gets(str);

    int length=strlen(str);
    if(length<80){
    for(int i=length;i<80;i++){
        strcat(str,".");
    }
    printf(str);
    }
    return 0;
}