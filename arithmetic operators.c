/*arithmetic operators*/
#include<stdio.h>
int main()
{
 int x, y, add, sub, mul, div, rem;
 printf("enter x, y values:");
 scanf("%d%d",&x,&y);
 add=x+y;
 sub=x-y;
 mul=x*y;
 div=x/y;
 rem=x%y;
 printf("result of addition is=%d\n",add);
 printf("result of subtraction is=%d\n",sub);
 printf("result of multiplication is=%d\n",mul);
 printf("result of division is=%d\n",div);
 printf("result of reminder is=%d\n",rem);
return 0;
}
