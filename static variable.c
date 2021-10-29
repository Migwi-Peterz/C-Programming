//c program for a static variable
#include<stdio.h>
int fun()
{
  static int c= 0;//static variable
  c++;
  return c;
}

int main()
{
  printf("%d ", fun());
  printf("%d ", fun());
  return 0;
}
