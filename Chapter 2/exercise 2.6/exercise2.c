#include<stdio.h>

int main(){

int n;
printf("Enter number:");
scanf("%d",&n);

for(int i=n;i>=0;i--){
    if(n==0){
        printf("\a");
    }
    printf("%d\n",i);
    printf("\a");
}

    return 0;
}