#include<stdio.h>
#include<string.h>

int main()
{
    char message[100];
    gets(message);

    int length=strlen(message);
    int space=0,comma=0,period=0;

    for(int i=0;i<length;i++){
        switch(message[i]){
            case ' ':space++;
                     break;
            case ',':comma++;
                     break;
            case '.':period++;
                     break;
        }
    }

    printf("Total spaces:%d\n",space);
    printf("Total commas:%d\n",comma);
    printf("Total periods:%d\n",period);

    

    return 0;
}