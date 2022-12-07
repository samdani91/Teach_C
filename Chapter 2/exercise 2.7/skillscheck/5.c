#include<stdio.h>

int main() {

int i=1,n;

 for(int row=1;row<=20;row++) {
    for(int col=1;col<=5;col++){
        printf("%d\t",i++);
    }
      printf("\n");
}

return 0;
}