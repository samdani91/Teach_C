#include<stdio.h>

void recurse(char *ptr);

int main()
{
    char name[100];
    scanf("%s",name);
    recurse(name);

    return 0;
}

void recurse(char *ptr){
    if(*ptr){
        printf("%c ",*ptr);
        ptr++;
        recurse(ptr);
    }
}