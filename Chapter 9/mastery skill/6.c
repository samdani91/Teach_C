#include<stdio.h>

int main(int argc,char *argv[])
{

    FILE *fp;
    int num;
    int i;
    if((fp=fopen("RAND","r"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }
    printf("Which number(0-99)?:");
    scanf("%d",&i);
    fseek(fp,i,SEEK_SET);
    fscanf(fp,"%d",&num);
    //fread(&num,sizeof num,1,fp);
    printf("%d\n",num);

    return 0;
}