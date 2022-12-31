#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{

    FILE *fp;
    int num;
    if((fp=fopen("RAND","w"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }
    for(int i=0;i<100;i++){
        num=rand();
        fprintf(fp,"%d\n",num);
        //fwrite(&num,sizeof num,1,fp); //garbage values in file
    }
    fclose(fp);
    
    return 0;
}
