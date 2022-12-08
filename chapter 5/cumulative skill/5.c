#include<stdio.h>
#include<string.h>

int main()
{


    char magic[]="concatenation";
    char show[]="-------------";
    char ch;
    int count=0;
    printf("You have 15 chances to guess the word\n");


    do{
    printf("%s\n",show);
    printf("Enter your word:");
    scanf(" %c",&ch);
    printf("\n");
    int length=strlen(magic);

    for(int i=0;i<length;i++){
        if(ch==magic[i]){
            show[i]=ch;
        }
    }
    count++;
    if(count==16) break;
    }while(strcmp(magic,show));

    printf("%s\n",show);
    if(count<=15)
    printf("You Won",count);
    else{
    printf("You guessed more than 15 times and you lost the game\n");
    printf("The magic word is %s",magic);

    }
    return 0;
}
