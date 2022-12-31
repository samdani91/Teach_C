#include<stdio.h>

int main(int argc,char *argv[])
{

    FILE *f1,*f2;
    char ch1,ch2;
    int same;
    unsigned long int l;

    if(argc!=3){
        printf("Usage: compare <f1> <f2>\n");
        return 0;
    }

    if((f1=fopen(argv[1],"r"))==NULL){
        printf("Can not open first file\n");
        return 0;
    }

    if((f2=fopen(argv[2],"r"))==NULL){
        printf("Can not open second file\n");
        return 0;
    }

    l=0;
    same=1;

    // compare the files

    while(feof(f1)==0){
        if(feof(f1)==0)
        ch1=fgetc(f1);
        ch2=fgetc(f2);
        if(ch1!=ch2){
            printf("Files differ at bytes number %lu\n",l+1);
            same=0;
            break;
        }
        l++;
    }
    if(same) printf("Files are the same\n");
    fclose(f1);
    fclose(f2);

    return 0;
}