#include <stdio.h>
#include <stdlib.h>

//1.8

/*
//example 1

int get_sqr(void); // function prototype

int main(void)
{
   int sqr;
   sqr=  get_sqr(); // function call
    printf("Square of the number:%d",sqr);
    return 0;
}

int get_sqr(void) {    //function  definition

int num;
printf("Enter a number:");
scanf("%d",&num);

return num*num;


}
*/

/*
//example 2

void f1(void) ;

int main(void) {

   f1();

return 0;
}

void f1(void) {

  printf("This is printed");
    return;
   printf("This is never printed");

}

*/

/*
//exercise 2

float convert(float dollar);


int main() {
    float dollar;
convert(dollar);

return 0;
}

float convert(float dollar) {
 printf("Enter dollar value:");
 scanf("%f",&dollar);
float pound = 0.5*dollar;
printf("Pound value:%f",pound);

}

*/


//exercise 4 - find the error


void func(void) {

    int i;
    printf("Enter your number:");
    scanf("%d",&i);

    return i;
}

int main(void) {

   int r= func();
    printf("%d",r);
    return 0;
}
