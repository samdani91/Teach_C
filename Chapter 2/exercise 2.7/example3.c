#include<stdio.h>

int xor(int p,int q);


int main(){
    int p,q;
    printf("Enter p(0 or 1):");
    scanf("%d",&p);
    printf("Enter q(0 or 1):");
    scanf("%d",&q);

    printf("p XOR q %d\n",xor(p,q));
  
    return 0;
}
int xor(int p,int q) {

    int result= (p||q) && !(p && q);
       return result;
}