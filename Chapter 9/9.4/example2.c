#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{

    FILE *fp;
    double d;
    int i;
    char str[100];

    if(argc!=2){
        printf("Specify the file name\n");
        return 0;
    }
    if((fp=fopen(argv[1],"w"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }

    fprintf(fp,"%lf %d %s",1412.25,1412,"Samdnai");
    fclose(fp);

    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }

    fscanf(fp,"%lf %d %s",&d,&i,str);
    printf("%lf %d %s\n",d,i,str);

    fclose(fp);

    return 0;
}
