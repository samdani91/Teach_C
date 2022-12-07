#include<stdio.h>

int main(){

int count;
scanf("%d",&count);

if(count) {                  // if(count) means count!=0
    printf("hello world");
}

if(!count){
    printf("this means count is zero");
}

    return 0;
}