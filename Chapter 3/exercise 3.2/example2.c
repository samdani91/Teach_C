#include<stdio.h>

int main()
{

    int answer;

    for(int i=1;i<=10;i++){
        printf("What is %d+%d?\n",i,i);
        printf("Enter your answer:");
        scanf("%d",&answer);

        if(answer==i+i){
            printf("Right!\n");
        }else{
            printf("Sorry,you are wrong!\n");
            printf("Try again\n");
            printf("What is %d+%d?\n",i,i);
            printf("Enter your answer:");
            scanf("%d",&answer);
        
           if(answer==i+i){
              printf("Right!");
           }else{
              printf("Sorry,you are wrong again!\n");
              printf("The correct answer is %d\n",i+i);
           }

        }
    }

    return 0;
}