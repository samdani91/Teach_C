#include<stdio.h>

int main(int argc,char *argv[])
{

    if(rename("input.txt","output.txt")){ //1
        printf("Rename failed\n");
    }else{
        printf("Rename Successfil\n");
    }

    return 0;
}