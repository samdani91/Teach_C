#include<stdio.h>

int main() {

int num,sum,prod;
sum=0;
prod=1;

for(num=1;num<6;num++){
    sum=sum+num;
    prod=prod*num;
}
 printf("sum and product are %d and %d",sum,prod);
 
return 0;
}