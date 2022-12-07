#include<stdio.h>

int main() {

 int answer,count,false=0,correct=0;
 for(count=1;count<=10;count++){
    printf("What is %d+%d ?\n",count,count);
    scanf("%d",&answer);

    if(answer==count+count){
        printf("Right!\n");
        correct++;
    } else{
        printf("Sorry,you are wrong\n");
        printf("The correct answer is %d\n",count+count);
        false++;
    }
 }
    printf("Total correct answers:%d\n",correct);
    printf("Total wrong answers:%d",false);
    
return 0;
}