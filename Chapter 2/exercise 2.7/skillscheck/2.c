#include<stdio.h>

int main()
{

    int rooms;
    float length,width,square_footage=0;

    printf("Enter total rooms:");
    scanf("%d",&rooms);

    for(int i=1;i<=rooms;i++){
        printf("Enter room %d length:",i);
        scanf("%f",&length);
        printf("Enter room %d width:",i);
        scanf("%f",&width);

        square_footage=square_footage+(length*width);
        
    }
       printf("Total square footage of the house:%f",square_footage);

    return 0;
}