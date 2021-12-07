#include<stdio.h>
main()
{
	int v;
	scanf("%d",&v);
	if(v>0)
	{
		printf("it is +ve");
	}
	else
	{
		if(v==0)
		{
			printf("it is neutral(zero)");
		}
		else
		{
			printf("it is -ve");
		}
	}
}
