#include<stdio.h>

int main(int argc,char *argv[])
{

    FILE *fp;
    char str[80],ch;
    int count;

    if(argc!=2){
        printf("Specify the file name\n");
        return 0;
    }
    if((fp=fopen(argv[1],"r"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }
    count=0;
    while(feof(fp)==0){
        fgets(str,80,fp);
        printf("%s\n",str);
        count++;

        if(count==23){
            printf("More?(y/n):");
            ch=getchar();
            if(ch=='n') break;
            count=0;
        }
    }

    fclose(fp);

    return 0;
}