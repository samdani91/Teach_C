#include<stdio.h>

int main(int argc,char *argv[])
{

    FILE *from,*to;
    char str[100];

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
        fgets(str,100,from);
        fputs(str,to);
    }
    fclose(from);
    fclose(to);
    
    return 0;
}