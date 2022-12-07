#include<stdio.h>

int main() {

int num,try=0;

for(int i=1;i<=10;i++){
   printf("Enter number:");
    scanf("%d",&num);
  if(num==12){
      printf("RIGHT!\n");
      break;
  } else if(num>12){
    printf("The guess is high\n");
  } else {
    printf("The guess is low\n");
  }
    try++;
} 
  if(num==12){
    printf("Total guess:%d",try+1);
  }
return 0;
}