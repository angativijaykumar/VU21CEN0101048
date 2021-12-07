#include<stdio.h>
main()
{
	int r,s,t;
	scanf("%d",&r);
	scanf("%d",&s);
	scanf("%d",&t);
	if(r<s&&r<t)
	{
		printf("%d is minimum",r);
	}
	else
	{
		if(s<r&&s<t)
		{
			printf("%d is minimum",s);
		}
		else
		{
			printf("%d is minimum",t);
		}
	}
}
