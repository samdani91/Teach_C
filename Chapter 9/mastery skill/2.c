#include<stdio.h>
#include<ctype.h>

int main(int argc,char *argv[])
{
    FILE *from,*to;
    char ch;

    if(argc!=3){
        printf("Usage: copy <source> <destination>\n");
        return 0;
    }

    if((from=fopen(argv[1],"r"))==NULL){
        printf("Can not open source file\n");
        return 0;
    }

    if((to=fopen(argv[2],"w"))==NULL){
        printf("Can not open destination file\n");
        return 0;
    }

    while(feof(from)==0){
        ch=fgetc(from);
        ch=toupper(ch);
        if(feof(from)==0) fputc(ch,to);
    }
    fclose(from);
    fclose(to);
    

    return 0;
}