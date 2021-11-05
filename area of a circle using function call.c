//area of a circle using function call
#include <stdio.h>
  long area(long radius);

  int main()
  {
    long radius;
    printf("Enter the radius of circle : ");
    scanf("%ld", &radius);

    printf("Area of circle : %ld", area(radius));
    printf("\n");

   return 0;
}
long area(long radius)
{
   long area;
   area= 3.14 * radius* radius;

   return area;
}
