#include<stdio.h>

int main(int argc,char *argv[])
{

    FILE *f1,*f2;
    long int loc;
    char ch;

    if(argc!=3){
        printf("Usage: revcopy <source> <destination>\n");
        return 0;
    }

    if((f1=fopen(argv[1],"r"))==NULL){
        printf("Can not open source file\n");
        return 0;
    }

    if((f2=fopen(argv[2],"w"))==NULL){
        printf("Can not open destination file\n");
        return 0;
    }

    fseek(f1,0L,SEEK_END);
    loc=ftell(f1);

    loc=loc-1;
    while(loc>=0L){
        fseek(f1,loc,SEEK_SET);
        ch=fgetc(f1);
        fputc(ch,f2);
        loc--;
    }
    fclose(f1);
    fclose(f2);

    return 0;
}