#include<stdio.h>

int main(int argc,char *argv[])
{

    FILE *fp;
    int count;

    if(argc!=2){
        printf("File name missing\n");
        return 0;
    }

    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }
    count=0;
    while(feof(fp)==0){
        fgetc(fp);
        if(ferror(fp)){
            printf("File error\n");
            return 0;
        }
        count++;
    }

    printf("File has %d bytes\n",count-1);
    fclose(fp);

    return 0;
}