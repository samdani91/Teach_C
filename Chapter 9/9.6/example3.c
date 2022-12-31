#include<stdio.h>

double d[10]={
        10.25,1412.12,45.56,89.32,12.36,48.65,69.69,69.58,15.32,10.98 
    };

int main(int argc,char *argv[])
{

    
    FILE *fp;
    long int loc;
    double num;

    if(argc!=2){
        printf("Specify the file name\n");
        return 0;
    }
    if((fp=fopen(argv[1],"w"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }
    if(fwrite(d,sizeof d,1,fp)!=1){
        printf("Write error\n");
        return 0;
    }
    fclose(fp);

    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }
    printf("Witch element?");
    scanf("%ld",&loc);
    if(fseek(fp,loc*sizeof(double),SEEK_SET)){
        printf("Seek error\n");
        return 0;
    }
    fread(&num,sizeof(double),1,fp);
    printf("Element %ld is %lf\n",loc,num);
    fclose(fp);

    return 0;
}