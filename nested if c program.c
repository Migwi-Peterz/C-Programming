//c program to demonstrate nested if
#include <stdio.h>
int main()
{
    float average;
    int maths,english,kiswahili,physics,chemistry;
    printf("Enter marks obtained in maths :");
    scanf("%d", &maths);
    printf("Enter marks obtained in english :");
    scanf("%d", &english);
    printf("Enter marks obtained in kiswahili:");
    scanf("%d", &kiswahili);
	printf("Enter marks obtained in physics:");
	scanf("%d", &physics);
	printf("Enter marks obtained in chemistry:");
	scanf("%d", &chemistry);

    average = (maths + english + kiswahili + chemistry + physics) / 5;
    printf("Average : %0.2f\n", average);

    if (average >= 90)
    {
        printf("Grade A");
    }
    else if (average >= 80)
    {
        printf("Grade B");
    }
    else if (average >= 70)
    {
        printf("Grade C");
    }
    else if (average >= 60)
    {
        printf("Grade D");
	}
	else if(average>=50)
	{
	    printf("Grade E");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
