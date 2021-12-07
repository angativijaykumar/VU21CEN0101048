#include<stdio.h>
main()
{
	int a;
	printf("enter the month number ");
	scanf("%d",&a);
	if(a>0&&a<=12)
	{
		printf("it is vaild");
	}
	else
	{
		printf("it is not vaild");
	}
}
