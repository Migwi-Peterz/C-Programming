#include <stdio.h>
int a=20; //global variable
static int b=2; //static variable
int main()
{
    int a=a+15;
    int b=b+1;
    printf("value of a is %d\n",a);
    printf("value of b is %d",b);
    return 0;
}
