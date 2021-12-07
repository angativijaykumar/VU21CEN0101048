#include<stdio.h>
main()
{
	int x;
	printf("enter the value for a year");
	scanf("%d",&x);
	if(x%4==0)
	{
		printf("it is a leap year");
	}
	else
	{
		printf("it is not a leap year");
	}
}
