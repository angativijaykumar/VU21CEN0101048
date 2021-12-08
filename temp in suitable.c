#include<stdio.h>
main()
{
	int C;
	scanf("%d",&C);
	if(C<0)
	{
		printf("freezing weather");
	}
	else if(C<10)
	{
		printf("very cold weather");
	}
	else if(C<20)
	{
		printf("cold weather");
	}
	else if(C<30)
	{
		printf("normal temperature");
	}
	else if(C<40)
	{
		printf("hot weather");
	}
	else if(C>=40)
	{
		printf("very hot weather");
	}
}
