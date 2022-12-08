#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];

    for(int i=0;;i++){
        printf("Enter your string:");
        gets(name);
        if(!strcmp(name,"quit")){
            break;
        }
    }
    

    return 0;
}