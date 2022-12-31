#include<stdio.h>
#include<ctype.h>

int main()
{

    FILE *fp;

    char ch;
    int count[26];
    for(int i=0;i<26;i++) count[i]=0;

    if((fp=fopen("input1.txt","r"))==NULL){
        printf("Can not open file\n");
        return 0;
    }
    int i;
    while(feof(fp)==0){
        i=0;
        ch=fgetc(fp);
        ch=toupper(ch);
        if(ch>='A'&&ch<='Z') count[ch-'A']++;
        
    }
    for(i=0;i<26;i++){
        printf("%c occured %d times\n",i+'A',count[i]);
    }

    fclose(fp);

    return 0;
}