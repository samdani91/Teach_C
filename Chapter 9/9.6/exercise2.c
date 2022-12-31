#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{

    FILE *fp;
    char ch ,val;
    if(argc!=3){
        printf("Usage: find <filename> <value>\n");
        return 0;
    }

    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Can not open source file\n");
        return 0;
    }
    val=atoi(argv[2]);
    while(feof(fp)==0){
        ch=fgetc(fp);
        if(ch==val){
            printf("Found value at %ld\n",ftell(fp));
        }
    }
    fclose(fp);
    return 0;
}