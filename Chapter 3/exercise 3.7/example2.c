#include<stdio.h>

int main()
{

    for(int i=1;i<=5;i++){
        for(int j=1;j<10;j++){
            printf("%d ",j);
            if(j==5) break;
        }
        printf("\n");
    }

    return 0;
}