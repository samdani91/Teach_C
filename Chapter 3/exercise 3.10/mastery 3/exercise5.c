#include<stdio.h>

int main()
{

    int i=1;
    while(i<=10){
        printf("%d ",i);
        i++;
    }
   
    do{
        printf("%d ",i);
        i++;
    }while(i<=10);

    for(int j=1;j<=10;j++){
        printf("%d ",j);
    }

    return 0;
}