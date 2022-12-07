#include <stdio.h>
#include <stdlib.h>
float pi=3.1416;//global

void f1();//prototype


void f2() {
printf("The summer soldier,");
float pi;//local variable
pi;//global
}

int main() {
f1();//funtion call

return 0;
}
void f1(){ //definition
   f2();
printf("the sunshine patriot.");
}
