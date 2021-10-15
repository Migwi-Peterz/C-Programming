#include <stdio.h
#define PI 3.141

int main(){
    float radius, surfaceArea;
    printf("Enter radius of Sphere\n");
    scanf("%f", &radius);
    /* Surface area of Sphere =
       4 X PI X Radius X Radius  */
    surfaceArea = 4*PI*radius*radius;
    printf("Total surface area of Sphere : %0.4f\n",
        surfaceArea);
    return 0;
}
