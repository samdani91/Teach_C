#include<stdio.h>

int main(int argc,char *argv[])
{

    FILE *fp;
    char str[100],ch;

    if(argc!=2){
        printf("File name is missing\n");
        return 0;
    }
    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }

    do
    {
        fgets(str,100,fp);
        printf("%s\n",str);
        printf("Next line?(y/n):");
        scanf(" %c",&ch);
        if(ch=='n') break;
    }while (feof(fp)==0);
    

    return 0;
}