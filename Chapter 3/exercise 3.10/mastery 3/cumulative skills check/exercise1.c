#include<stdio.h>
#include<conio.h>
int main()
{

    char ch;
    for(int i=1; ;i++){
        printf("Input(q to stop):");
        ch=getche();
        if(ch=='q'){
            break;
        }
        switch(ch){
            case '\t': printf("\nTab\n");
                       break;
            case '\b':printf("Backspace\n");
                       break;
            case '\r':printf("Newline\n");
                       break;
        }
    }

    return 0;
}