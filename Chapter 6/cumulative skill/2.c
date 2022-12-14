#include<stdio.h>

int main()
{

    char word[100],*ptr;
    int spaces=0;
    printf("Enter your string:");
    gets(word);
    
    ptr=word;

    while(*ptr){
        if(*ptr==' '){
            spaces++;
        }
        ptr++;
    }

    printf("Total spaces:%d\n",spaces);


    return 0;
}