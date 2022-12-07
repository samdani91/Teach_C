#include<stdio.h>

int main() {

int ans;
printf("What is 10+14?\n");
printf("Enter answer:");
scanf("%d",&ans);

if(ans==10+14) {
        printf("Right!");
} else {
         printf("Sorry,you are wrong.");
         printf("The correct answer is 24.");

  }

return 0;
}