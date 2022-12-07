#include<stdio.h>

int main()
{

    float avg_speed,distance;
    int n;
    printf("Total number of test:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("Test %d\n",i);
        printf("Enter average speed:");
        scanf("%f",&avg_speed);
        printf("Enter distance:");
        scanf("%f",&distance);
        
        printf("Driving time:%f\n",distance/avg_speed);
    }
   

    return 0;
}