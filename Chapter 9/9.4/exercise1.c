#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char names[100][50];
char numbers[100][12];

int loc=0;

int menu(void);
void enter(void);
int load(void);
int save(void);
void find(void);

int main(int argc,char *argv[])
{
    int choice;
    

    do{
        choice=menu();
        switch(choice){
            case 1:enter();
            break;
            case 2:find();
            break;
            case 3:save();
            break;
            case 4:load();
        }
    }while(choice!=5);
    
    return 0;
}

int menu(void){
    int i;
    char str[100];
    printf("1.Enter the names and numbers\n");
    printf("2.Find numbers\n");
    printf("3.Save directory to disk\n");
    printf("4.Load directory from disk\n");
    printf("5.Quit\n");

    do{
        printf("Enter your choice:");
        gets(str);
        i=atoi(str);
        printf("\n");
    }while(i<1 || i>5);
    return i;
}

void enter(void){
    for(loc;loc<100;loc++){
        if(loc<100){
            printf("Enter the names and numbers\n");
            gets(names[loc]);
            if(!*names[loc]) break;
            gets(numbers[loc]);
        }
    }
}

void find(void){
    char name[100];
    printf("Enter name:");
    gets(name);
    for(int i=0;i<100;i++){
        if(!strcmp(name,names[i])) printf("%s %s\n",names[i],numbers[i]);
    }
}

int load(void){
    FILE *fp;
    if((fp=fopen("phone","r"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }
    loc=0;
    while(feof(fp)==0){
        fscanf(fp,"%s%s",names[loc],numbers[loc]);
        loc++;
    }
    fclose(fp);
}

int save(void){
    FILE *fp;
    if((fp=fopen("phone","w"))==NULL){
        printf("Cannot open file\n");
        return 0;
    }
    for(int i=0;i<loc;i++){
        fprintf(fp,"%s%s",names[i],numbers[i]);
    }
    fclose(fp);
}