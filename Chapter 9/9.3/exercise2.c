#include<stdio.h>

int main(int argc,char *argv[])
{

    FILE *f1,*f2,*temp;
    char ch;
    if(argc!=3){
        printf("Usage: exchange <f1> <f2>\n");
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

    if((temp=fopen("temp.tmp","w"))==NULL){
        printf("Can not open temporary file\n");
        return 0;
    }
    
    // copy f1 to temp

    while(feof(f1)==0){
        ch=fgetc(f1);;
        if(feof(f1)==0){ 
            fputc(ch,temp);
        }
    }
    fclose(f1);

    if((f1=fopen(argv[1],"w"))==NULL){
        printf("Can not open first file\n");
        return 0;
    }

    //copy f2 to f1

    while(feof(f2)==0){
        ch=fgetc(f2);;
        if(feof(f2)==0){
            fputc(ch,f1);
        }
    }
    fclose(f2);
    fclose(temp);

    if((f2=fopen(argv[2],"w"))==NULL){
        printf("Can not open second file\n");
        return 0;
    }

    if((temp=fopen("temp.tmp","r"))==NULL){
        printf("Can not open temporary file\n");
        return 0;
    }

    // copy temp to f2

    while(feof(temp)==0){
        ch=fgetc(temp);;
        if(feof(temp)==0){
            fputc(ch,f2);
        }
    }

    fclose(f1);
    fclose(f2);
    fclose(temp);


    return 0;
}