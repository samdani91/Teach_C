#include<stdio.h>

int main(){
  int a,b;
  printf("Enter first number(a):");
  scanf("%d",&a);
  printf("Enter second number(b):");
  scanf("%d",&b);

//relational operators

  printf("a>b %d\n",a>b);
  printf("a>=b %d\n",a>=b);
  printf("a==b %d\n",a==b);
  printf("a<b %d\n",a<b);
  printf("a<=b %d\n",a<=b);

//lofical operators
  
  printf("a && b %d\n",a&&b);
  printf("a || b %d\n",a || b);
  printf("!a !b %d %d\n",!a,!b);


    return 0;
}