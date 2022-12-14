#include<stdio.h>

int main()
{

    int *ptr,var;
    ptr=&var;
    *ptr=1412;

    printf("%d",var);

    return 0;
}