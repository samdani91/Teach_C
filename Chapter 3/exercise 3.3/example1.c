#include<stdio.h>

int main()
{

    int i;
    char ch='a';

    for(i=0;ch!='q';i++){
        printf("pass:%d\n",i);
        ch=getchar();
    }


    return 0;
}