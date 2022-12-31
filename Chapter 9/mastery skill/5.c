#include<stdio.h>

int main(int argc,char *argv[])
{

    FILE *fp;
    int num;
    if((fp=fopen("RAND","r"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }
    for(int i=0;i<100;i++){
        fread(&num,sizeof num,1,fp);
        printf("%d\n",num);
    }
    fclose(fp);

    return 0;
}