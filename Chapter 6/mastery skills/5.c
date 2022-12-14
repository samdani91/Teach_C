#include<stdio.h>

int main()
{

    char *p, str[80]="this is a treat";

    p=str;

    printf("%c\n",*(str+2));

    printf("%c",str[2]);


    return 0;
}