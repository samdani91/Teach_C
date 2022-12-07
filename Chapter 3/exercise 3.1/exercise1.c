#include<stdio.h>

int main()
{

    char ch;
    char lowest;

    for(int i=1;i<=20;i++){
       ch=getchar();
     if(ch<'z'){
        lowest=ch;
     }
    }
    
    printf("The earliest alphabet:%c\n",lowest);

    return 0;
}