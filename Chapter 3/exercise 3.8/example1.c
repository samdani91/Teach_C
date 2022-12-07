#include<stdio.h>

int main()
{

    int total=0, i,j;
    do{
        printf("Enter next number(0 to stop):");
        scanf("%d",&i);
        printf("Enter number again:");
        scanf("%d",&j);

        if(i!=j){
            printf("Mismatch\n");
            continue;
        }
        total=total+i;
    }while(i);

    printf("Total is %d",total);

    return 0;
}