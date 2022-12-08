#include<stdio.h>
#include<string.h>
int main()
{

    char dictionary[2][2][50]={
        "dog","an animal",
        "bus","a vehicle",
    };
    char str[50];
    printf("Enter your word:");
    gets(str);

    for(int i=0;i<2;i++){
        if(strcmp(dictionary[i][0],"")){
            if(!strcmp(str,dictionary[i][0])){
                printf("%s",dictionary[i][1]);
            }

        }
    }
    
    return 0;
}