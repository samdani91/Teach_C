#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{

    FILE* fp;
    char str[100];

    if(argc!=2){
        printf("Specify the file name\n");
        return 0;
    }
    if((fp=fopen(argv[1],"w"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }
    printf("Enter a blank line to stop\n");
    do{
        printf(": ");
        scanf("%s",str);
        strcat(str,"\n");
        if(*str!='\r'){
            fputs(str,fp);
        }
    }while(*str!='\n');
    fclose(fp);

    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }

    do{
        fgets(str,100,fp);
        if(feof(fp)==0) printf("%s",str);
    }while(feof(fp)==0);

    fclose(fp);

    return 0;
}
