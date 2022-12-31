#include<stdio.h>

int main(int argc,char *argv[])
{

    FILE *from,*to;
    char ch;

    if(argc!=3){
        printf("Usage: copy <source> <destination>\n");
        return 0;
    }

    if((from=fopen(argv[1],"r"))==NULL){
        printf("Can not open source file\n");
        return 0;
    }

    if((to=fopen(argv[2],"w"))==NULL){
        printf("Can not open destination file\n");
        return 0;
    }

    while(feof(from)==0){
        ch=fgetc(from);
        if(feof(from)==0) fputc(ch,to);
        // if(ferror(from)){
        //     printf("Error reading source file\n");
        //     return 0;
        // }
        // if(ferror(from)){
        //     fputc(ch,to);
        // }
        // if(ferror(to)){
        //     printf("Error writing  destination file\n");
        //     return 0;
        // }
    }
    fclose(from);
    fclose(to);
    // if(fclose(from)==EOF){ 
    //     printf("Error closing source file\n");
    //     return 0;
    // }
    // if(fclose(to)==EOF){
    //     printf("Error closing destination file\n");
    //     return 0;
    // }
    
    return 0;
}