#include<stdio.h>

int main()
{

    float base,height,length,width,radius;
    char ch;
    printf("Enter shape(c->circle,t->triangle,r->rectangle):");
    ch=getchar();
    

    if(ch=='c'){
        printf("Enter radius:");
        scanf("%f",&radius);
        printf("Area of the circle is %f",3.1416*radius*radius);

    }else if(ch=='t'){
        printf("Enter base:");
        scanf("%f",&base);
        printf("Enter height:");
        scanf("%f",&height);
        printf("Area of the triangle is %f",0.5*base*height);

    }else if(ch== 'r'){
        printf("Enter length:");
        scanf("%f",&length);
        printf("Enter width:");
        scanf("%f",&width);
        printf("Area of the rectangle is %f",length*width);

    }
     

    return 0;
}