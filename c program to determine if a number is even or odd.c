//program to determine if a number is evn or odd
#include <stdio.h>
int main()
{
	int a,remainder;
	printf("enter value of a\n");
	scanf("%d",&a);
	remainder=a%2;
	if(remainder==0)
	{printf("number is even");}
	else
	{printf("number is odd");}
return 0;
}
