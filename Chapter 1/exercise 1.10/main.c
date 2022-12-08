#include <stdio.h>
#include <stdlib.h>

//1.10

 /*
  //1.
float gravity(float weight);

int main()
{
   float weight;
   printf("Enter your weight:");
   scanf("%f",&weight);

   printf("Effective weight on moon:%f",gravity(weight));

    return 0;
}

float gravity(float weight) {

 float ew= weight*.17; //effective weight

  return ew;


}
*/


//3. convert ounces to cups
int o_to_c(int ounces);

int main() {
 int ounces;
 printf("Enter number of ounces:");
 scanf("%d",&ounces);

 printf("Number of cups:%d",o_to_c(ounces));

return 0;
}

int o_to_c(int ounces) {

   int cups= ounces/8; // 8 ounces=1 cup;
     return cups;

}