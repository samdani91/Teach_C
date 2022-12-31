#include<stdio.h>

int main(int argc,char *argv[])
{

    long int loc;
    FILE *fp;

    if(argc!=2){
        printf("Specify the file name\n");
        return 0;
    }
    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }

    printf("Enter byte to seek to:");
    scanf("%ld",&loc);

    if(fseek(fp,loc,SEEK_SET)){
        printf("Seek error\n");
        return 0;
    }

    printf("Value at loc %ld is %d",loc,getc(fp));
    fclose(fp);

    return 0;
}