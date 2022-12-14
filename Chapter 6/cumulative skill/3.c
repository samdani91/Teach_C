#include<stdio.h>

int main()
{

    int count[100][10];
    //*ptr;
    //ptr=count;

    *((int *)count+(44*10)+8)=99;

    printf("%d",count[44][8]);


    return 0;
}