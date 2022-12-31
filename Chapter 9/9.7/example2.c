#include<stdio.h>

int main(int argc,char *argv[])
{

    FILE *fp;
    char ch;
    if(argc!=2){
        printf("Specify the file name\n");
        return 0;
    }
    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }
    while(feof(fp)==0){
        if(feof(fp)==0){
            ch=fgetc(fp);
            putchar(ch);
        }
    }
    rewind(fp);
    do{
        if(feof(fp)==0){
            ch=fgetc(fp);
        }
        putchar(ch);
    }while(feof(fp)==0);

    fclose(fp);

    return 0;
}