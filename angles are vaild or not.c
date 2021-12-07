#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the angles of triangle");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	{
		printf("is valid");
	}
	else
	{
		printf("not vaild");
	}
}
