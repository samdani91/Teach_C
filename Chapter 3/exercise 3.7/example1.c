#include<stdio.h>
#include<conio.h>
int main()
{

    char ch;
    for(int i=1;i<=1000;i++){
        if(i%6==0){
            printf("%d ,more?(Y/N):",i);
            ch=getche();
            printf("\n");
            if(ch=='N') break;
        }
    }

    return 0;
}