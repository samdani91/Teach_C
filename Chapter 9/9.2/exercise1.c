#include<stdio.h>

int main(int argc,char *argv[])
{
    FILE *fp;
    char ch;

    if(argc!=2){
        printf("File name missing\n");
        return 0;
    }

    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Can not open file\n");
        return 0;
    }
    while((ch=fgetc(fp))!=EOF) putchar(ch);

    fclose(fp);

    

    return 0;
}