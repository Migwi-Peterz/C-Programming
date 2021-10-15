#include <stdio.h>

#define PI 3.141

int main(){
    float radius, volume;
    printf("Enter radius of Sphere\n");
    scanf("%f", &radius);
    /* Volume of Sphere =
       4/3 X PI X Radius X Radius X Radius */
    volume = (4.0/3)*PI*radius*radius*radius;

    printf("Volume of Sphere : %0.4f\n", volume);

    return 0;
}
