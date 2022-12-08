#include<stdio.h>

int main()
{

    int num[20],count=0,c=0,t;
    for(int i=0;i<20;i++){
        scanf("%d",&num[i]);
    }

    for(int i=0;i<20;i++){
      if(num[i]!=-1){
        for(int j=i;j<20;j++){
          if(num[i]==num[j]){
            count++;
            if(i!=j) num[j]=-1;
          }
        }
        if(count>c){
          c=count;
          t=i;
        }
      }
      count=0;
    }
    printf("\nMode=%d",num[t]);

    return 0;
}