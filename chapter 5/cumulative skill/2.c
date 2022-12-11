#include<stdio.h>
#include<string.h>
int main()
{

   char string[100];
   gets(string);
   int j=strlen(string)-1; 
   for(int i=0;i<=j;i++,j--){
    if(i<j){
        printf("%c%c",string[i],string[j]);
    }else{
        printf("%c",string[i]);
    }
   }

    return 0;
}