#include <stdio.h>
#include <stdlib.h>

//1.9

/*
//example 2
void outchar(char ch);

int main()
{
    outchar('A');
    outchar('B');
    outchar('C');
    return 0;
}

void outchar(char ch) {

printf("%c\n",ch);

}
*/
/*
//exercise 1
int outnum(int n);

int main() {
   int n;
   printf("Enter your number:");
   scanf("%d",&n);
   outnum(n);
return 0;
}

int outnum(int n) {

printf("The output number:%d",n);

}
*/

//exercise 2 - find the error

void sqr_it(int num) ;


int main(void) {
  sqr_it(10.0);
  return 0;

}

void sqr_it(int num) {

printf("Square value:%d",num*num);
}
