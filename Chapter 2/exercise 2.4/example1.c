#include <stdio.h>


int main()
{

int answer, count;
for(count=1; count<=10; count=count+1) {
   printf("What is %d + %d?\n", count,count);
    printf("Enter answer:");
    scanf("%d", &answer);

 if(answer == count+count) {
        printf("Right!\n");
 } else {
    printf("Sorry,you're wrong.");
       printf("The answer is %d.\n", count+count);

   }
}


  return 0;
}
